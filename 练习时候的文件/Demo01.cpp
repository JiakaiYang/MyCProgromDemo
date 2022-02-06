#include <stdio.h>
#include <stdlib.h>
int main(void)
{   //自动转化字母大小写程序
    char c;
    printf("请输入字符（大小写会自动转换）:\n");
    scanf("%c", &c);
    if (65 <= c && c<= 90)
    {
        c = (char)c + 32;
    }
    else if (97 <= c && c <=122)
    {
        c = (char)c - 32;
    }else{
        printf("请输入字母！！\n");
        exit(0);
    }
    printf("转换后结果为:%c\n", c);
    return 0;
}