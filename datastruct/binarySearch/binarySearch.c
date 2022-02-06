#include <stdio.h>
/* 
二分搜索  

 */
int binarySearch(int*, int, int);
int main(void)
{   int arr[] = {22,33,44,55,66,77,88};
    int tag;
    printf("请输入要查找的值：");
    scanf("%d",&tag);
    int result = binarySearch(arr,7,tag);   
    if (result == -1)
    {
        printf("未在该数组中找到该值_%d__!\n",tag);
    }else{
        printf("在数组中发现该值：%d\n",result);
    }
    return 0;
}
int binarySearch(int * arr, int len, int target)
{
    int left = 0;
    int right = len - 1;
    while (left <= right)
    {
        int mid =left +(int)((right - left) / 2);
        printf("mid ==%d\n",arr[mid]);
        if (arr[mid] == target)
        {
            return arr[mid];
        }
        else if (arr[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}