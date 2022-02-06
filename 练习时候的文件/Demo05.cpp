#include <stdio.h>
int main(void)
{
    int array[] = {1, 2, 3, 4, 5};  //如果有初值，可不写限定长度
    int arraySec[100];   // 如果定义时不进行初始化，里面的值是不可预料的。。
    char a[100] = "asdasd\0";  
    char b[12] = {'i',' ','m','i','s','s',' ','y','o','u','!','\0'};  
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }
    printf("%s\n", a);
    printf("%s\n", b);
    return 0;
}