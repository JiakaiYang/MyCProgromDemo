#include <stdio.h>
int main(void)
{
    int a;
    char b;
    double c;
    scanf("%d%c%f",&a,&b,&c);
    //输入1234a123o.26    1234 ->a    a->b   123->c
    /* 
        %d在输入1234时遇到了 'a'，会认为后面没有数字了。  所以第一个数据到此结束:  1234 ->a
        %c只要求输入一个字符 ， 系统判断该字符(a)已经输入结束  , 所以 a -> b
        输入%c之后不需要空格 ， %f输入到123之后发现字符’o’ 数值数据到此结束
     */
    return 0;
}