#include <stdio.h>
#include <string.h>
#include <strlwr.h> 
//自定义的strlwr.h 包。。。  linux 没有这个strlwr函数和 strupr函数，   strlwr.h文件放在usr/include 文件夹内
// #include <bits/stdc++.h>
//代替c 中的 string.h库

int main(void)
{
    char string[50];
    char string2[20];
    char string3[20];
    printf("输入字符串");
    gets(string);
    printf("\n");
    printf("再输入字符串");
    gets(string2);
    printf("\n");
    printf("输出字符串1:");
    puts(string);
    printf("\n");
    printf("输出字符串1转小写的结果:%s \n",strlwr(string));
    // printf("输出字符串1转大写的结果:%s \n",strupr(string));

    printf("输出字符串2:");
    puts(string2);

    printf("\n");
    printf("输出字符串2转小写的结果:%s \n",strlwr(string2));
    // printf("输出字符串2转大写的结果:%s \n",strupr(string2));



    printf("输出连接1和2字符窜的结果:%s \n", strcat(string, string2)); //将字符窜2加到字符串1的后面。。字符串1改变，变长

    /*
        strcmp(A,B)  A,B皆为数组.   A>B strcmp 返回正数    相等 返回0   A<B 返回负数
    */
    int result = strcmp(string, string2);
    printf("比较两个字符串，其返回值为:%d\n", result);

    int a = strlen(string);
    printf("将字符串2添加到字符串1之后的长度：%d\n", a);
    printf("将字符串2复制到字符串1里面去\n");
    printf("复制的结果为：%s\n", strcpy(string, string2));
    printf("复制后的长度为:%d\n", strlen(string));
    return 0;
}
