#include <stdio.h>
#include <malloc.h>
int * f();
int * c();
void b(int * pArr);
int main(void)
{
    int * arr = f();
    b(arr);
    free(arr);

    // int * arr2 = c();   这里会出现一个警告    函数c() 返回局部变量的地址
    // b(arr2);
    return 0;
}
void b(int * pArr)
{
  printf("%d\n",pArr[2]);
}

int * f()
{
    int * pArr = (int*)malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++)
    {
        pArr[i] = i + 2;
    }
    return pArr;
}
int * c()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 2;
    }
    return arr;
}