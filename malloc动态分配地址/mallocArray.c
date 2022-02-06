#include <stdio.h>
#include <malloc.h>

void printArr(int *,int); //声明一个打印数组的函数
int main(void)
{
    int arr[5]; // 如果int 占 4个字节的话，那么数组arr占20字节
    int len;
    int *pArr;
    printf("请输入数组长度：");
    scanf("%d", &len);
    pArr = (int *)malloc(sizeof(int) * len); //动态分配内存 大小为 int类型所占字节的 len 倍
    printf("请输入%d个int类型的数值:\n",len);
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&pArr[i]);  //输入int 类型的数值
    }
    printArr(pArr,len); //打印数组
    return 0;
}
void printArr(int * pArr,int len)//打印方法的实现
{
     printf("数组打印结果为:");
    for(int i = 0; i <len;i++)
    {
        printf("%d  ",pArr[i]);
    }
    printf("\n");
}