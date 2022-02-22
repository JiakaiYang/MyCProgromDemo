#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>

int *arrCpy = (int *)malloc(10 * sizeof(int));
void printArr(int *, int);
void mergeSort(int *arr, int low, int high);
void megerMethod(int *arr, int low, int mid, int high);

int main()
{
    int *arr = (int *)malloc(9 * sizeof(int));
    srand((unsigned)time(0));
    /*
    每次调用rand之前系统都会调用srand(unsigned x)函数，且srand()默认为的参数默认为1，
    如果参数是固定的，那么每次随机的结果都是固定的序列
    所以用 time（0）来与时间关联起来。
    为了确保生成的随机数为尽可能符合概率上的随机，需要调用一个函数time（）
    （是指返回自 Unix 纪元（January 1 1970 00:00:00 GMT）起的当前时间的秒数的函数，
    主要用来获取当前的系统时间，返回的结果是一个time_t类型）,这个函数包含在头文件time.h里，
    在生成随机数的调用下需强制类型转换为(unsigned)time()，后面一个括号中必须填入(unsigned)time(NULL)或(unsigned)time(0)。


    */
    for (int i = 0; i < 9; i++)
    {
        arr[i] = (rand() % 10) * 100 + (rand() % 10) * 10 + (rand() % 10);
    }
    printArr(arr, 9);
    mergeSort(arr, 0, 8);
    printArr(arr, 9);
    return 0;
}
void printArr(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void mergeSort(int *arr, int low, int high)
    {
        if (low < high)
        {
            int mid = (low + high) / 2;
            mergeSort(arr, low, mid);
            mergeSort(arr, mid + 1, high);
            megerMethod(arr, low, mid, high);
        }
    }
void megerMethod(int *arr, int low, int mid, int high)
    {
        for (int k = low; k < high; k++)
            arrCpy[k] = arr[k];

        for (int i = low,  j = mid + 1,  k = i; i < mid && j < high; k++)
        {
            if (arrCpy[i] < arrCpy[j])
                arr[k] = arrCpy[i++];
            else
                arr[k] = arrCpy[j++];
        }
         while (i <= mid)
        {
            arr[k++] = arrCpy[i++];
        }
        while (j <= high)
        {
            arr[k++] = arrCpy[j++];
        }
        
    }
    