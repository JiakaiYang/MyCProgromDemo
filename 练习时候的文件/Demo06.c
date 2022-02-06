#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int main(void)
{
    char string[100];
    printf("请输入一行字符串(只支持英文):");
    gets(string);
    int num; //存放单词个数
    int word;
    bool isError = false;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] < 'A' || string[i] > 'z')
        {
            isError = true;
        }
        if (string[i] == ' ')
            word = 0;
        else if (word == 0)
        {
            word = 1;
            num++;
        }
    }
    if (isError)
    {
        printf("只支持26字母哦！\n");
        exit(0);
    }
    else
    {
        printf("There are %d words in this line.\n", num);
    }
    return 0;
}