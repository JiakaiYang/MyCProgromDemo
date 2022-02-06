#include <stdio.h>
#include <string.h>
int main(void)
{   
    int numArray[] = {0,1,2,3,4,5,6,7,8,9,10};
    int *p;
    p = &numArray[0];
    int i ; //充当计时器
    i = 1;
    do{
        printf("numArray[%d] = %d\n",i++,*p);   // 数组 的地址所连续的。
        p++;
        if( i > 11){
            break;
        }
    }
    while (*p !='\0');
    
    
    return 0;
}