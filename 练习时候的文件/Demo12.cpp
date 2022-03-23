#include <iostream>
/**
 * https://www.bilibili.com/video/BV1TD4y1Q751?spm_id_from=333.337.search-card.all.click
 * 插入排序
 * 最好的情况时间复杂度为O(n)
 * 最坏的情况时间复杂度为O(n^2)
 */
using namespace std;
void insertion_sort(int arr[], int length);
void printArr(int arr[], int length);
int main()
{
    int arr[] = {23, 123, 455, 664, 7, 234, 6634, 7773};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, size);
    printArr(arr, size);
    return 0;
}
void insertion_sort(int arr[], int length)
{
    for (int i = 1; i < length; i++)
    {
        int key = arr[i]; //把要插入的元素储存起来
        int j = i - 1; //要插入的前一个元素
        while (j >= 0 && arr[j] > key) //前面一个元素下标一定要大于0，且只有前面的元素大于要插入的元素才需要操作
        {
            arr[j+1] = arr[j]; //因为已经把要插入的数储存起来了。满足上面的条件，把它替换前前一个元素

            j--; //j-- 后再循环  一直判断 和替换
        }
        //上面的while循环不成立后，证明  当前arr[j]的位置值小于 key 值
        //把 key 值插入在它的后面
        arr[j+1] = key;
    }
}
void printArr(int arr[], int length) //打印数组
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}