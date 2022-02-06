#define PI 3.1415926 //定义符号常量用  #define   后面没有分号  且常量名和常量之间没有 =
#include <stdio.h>
#include <math.h>
/* 
    gcc ./定义符号常量.c -lm -o ./定义符号常量 
    编译时 -lm 表示连接 library math 库    -o表示输出为  ./定义符号常量 的文件
    
    #define不是一个c语句，该行末尾没有分号，他是一个“预编译指令”。

    不要把符号常量和和变量混淆，符号常量只是一个符号，不占储存单元。它只进行简单的符号置换 如：后面所有的 PI都会 替换成3.1415926
 */
int main(void)
{
    // 半径为r =2， 它的周长c = ？，面积area =？
    int r = 2;
    double c, area;
    c = 2 * PI * r;
    area = PI * pow((double)r, 2);
    printf("area = %lf\n",area);
    return 0;
}