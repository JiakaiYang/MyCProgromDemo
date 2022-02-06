#include <stdio.h>
int main(void)
{
    int year; //声明年份变量
    printf("请输入想要查询是否是闰年的年份：");
    scanf("%d",&year);
    if (year % 400 == 0)
    {
        printf("%d是润年\n", year);
    }
    else
    {
        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                printf("%d是不是润年\n", year);
            }
            else
            {
                printf("%d是润年\n", year);
            }
        }
        else
        {
            printf("%d不是润年\n", year);
        }
    }
    return 0;
}