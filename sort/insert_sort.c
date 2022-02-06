#include <stdio.h>
/**
 * 使用宏来计算数组长度
 * 
 */
#define ARRAY_SIZE(ARRAY)  (sizeof(ARRAY)/sizeof(ARRAY[0]))
//牛逼

int *insertion_Sort(int arr[], int length);
void printArr(int arr[], int length);
// int count_Ele(int arr[]);
int main(void)
{
    int arr[] = {123, 2234, 567, 342, 778, 6758, 2342, 8563};
    int length = sizeof(arr) / sizeof(arr[0]);
    // int size = count_Ele(arr);


    printf("size:%d\n",ARRAY_SIZE(arr));//如何使用宏


    int *newArr = insertion_Sort(arr, length);
    printArr(newArr, length);
    return 0;
}
int *insertion_Sort(int arr[], int length)
{
    for (int i = 1; i < length; i++)
    {
        int cur = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] >= cur)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = cur;
    }
    return arr;
}
void printArr(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
/* int count_Ele(int arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        i++;
    }
    return i;
} */
