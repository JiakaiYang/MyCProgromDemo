#include <stdio.h>
int main(void)
{
    // 有时char类型和int类型可以互用
    char c1 = 98, c2 = 97;
    printf("输出char类型: c1 = %c,c2 = %c \n", c1, c2);
    printf("输出int类型: c1 = %d,c2 = %d \n", c1, c2);
    /* 
        char类型的运算和输出
     */

    c1-=32;
    c2-=32;
    printf("输出char类型-32之后的结果: c1 = %c,c2 = %c \n", c1, c2);
    return 0;
}