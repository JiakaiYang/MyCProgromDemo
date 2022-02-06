#include <stdio.h>
#include <stdlib.h>
int main(void)
{   int day;
    printf("输入0-6，自动会输出星期几:");
    scanf("%d",&day);
    if(!(0<=day&&day<=6)){
        printf("请输入0-6的之间的任意一个数字\n");
        exit(0);
    }else{
        switch (day)
        {
        case 1:  printf("星期一\n");
            break;
        case 2:  printf("星期二\n");
            break;
        case 3:  printf("星期三\n");
            break;
        case 4:  printf("星期四\n");
            break;
        case 5:  printf("星期五\n");
            break;
        case 6:  printf("星期六\n");
            break;
        
        default: printf("星期天\n");
            break;
        }
    }
    return 0;
}