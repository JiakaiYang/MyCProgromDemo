#include <stdio.h>
#define ARRSIZE(ARRAY) (sizeof(ARRAY) / sizeof(ARRAY[0]))
int quickSort(int arr[], int low, int hight);
void quickSortMethod(int arr[], int low, int hight);
void printArr(int arr[], int length);
int main(void)
{
    int arrText[] = {213,435,7585,2342,823478,9056,2345,1002,1234,525,45642,1234};
    int size = ARRSIZE(arrText);
    quickSortMethod(arrText, 0, size - 1);
    printArr(arrText, size);
    return 0;
}
int quickSort(int arr[], int low, int hight)
{
    int pivot = arr[low];
    while (low < hight)
    {
        while (low < hight && arr[hight] >= pivot)
        {
            hight--;
        }
        arr[low] = arr[hight];
        while (low < hight && arr[low] <= pivot)
        {
            low++;
        }
        arr[hight] = arr[low];
    }
    arr[low] = pivot;
    return low;
}
void quickSortMethod(int arr[], int low, int hight)
{
    if (low < hight)
    {
        int pivotpos = quickSort(arr, low, hight);
        quickSortMethod(arr, low, pivotpos -1);
        quickSortMethod(arr, pivotpos + 1, hight);
    }
}
void printArr(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}