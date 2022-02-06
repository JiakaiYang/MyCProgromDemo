#include <stdio.h>
int main(void)
{
    // scanf(格式控制，地址列表);  地址列表输入的是变量地址，而不是变量名   如： int a ； 的地址为&a 
    int a, b, c;
    // scanf("%d%d%d",&a,&b,&c);
    //"%d%d%d"输入数据时，可以用一个或者多个空格来分隔，也可以按enter键或者tab键来分隔。
    scanf("%d,%d,%d", &a, &b, &c); //&a 为变量地址  //应当按格式控制严格输入  eg ：1，2，3
    // 当格式控制  为“%d:%d”  输入时应为   1:2  。同理 "%d %d" 输入时应为  1 2

    // 在用“%c”格式声明字符输入时，空格和转义字符都作为有效字符输入 
    //“%c%c%c”  输入 a b  ,空格会被输入到第二个字符位置.
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("\n");
    return 0;
}