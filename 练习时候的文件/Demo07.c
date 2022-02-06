#include <stdio.h>
int numFn(int);
int main(void)
{
    int inNumemeber,result;
    printf("1+n递归:请输入n的值：");
    scanf("%d", &inNumemeber);
    printf("%d\n",inNumemeber);
    result = numFn(inNumemeber);
    printf("递归结果为:%d\n",result);
    return 0;
}
int numFn(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (numFn(n - 1) + n);
    }
}