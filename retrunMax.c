#include <stdio.h>
int getMax(int, int, int);
int main(void)
{   int result;
    result =getMax(11,222,33);
    printf("最大值为:%d\n",result);
    return 0;
}
int getMax(int a, int b, int c)
{
    int tmp;
    if (a > b)
    {
        tmp = a;
    }
    else
    {
        tmp = b;
    }
    if (tmp < c)
    {
        tmp = c;
    }
    return tmp;
}