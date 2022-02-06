#include <stdio.h>

int fnc();
int main(void)
{   
    for(int i = 0; i<5;i++)
    {
        printf("第%d次调用输出的值为(%d!):%d\n",i+1,i+1,fnc());
    }
    return 0;
}
int fnc(void)
{
    static int result = 1;
    static int num=1;
    result = result *num;
    num++;
    return result;
}