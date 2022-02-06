#include <stdio.h>
int main(void)
{
    // putchar 输出字符变量都值。
    char a = 'B', b = 'O', c = 'Y';
    putchar(a);
    putchar(b);
    putchar(c);
    putchar('\n'); // 输出换行符
    putchar(a);
    putchar(b);
    putchar(c);
    putchar('\n'); // 输出换行符
    int d,e,f;
    d = 66;
    e = 79;
    f = 89;
    putchar(d);
    putchar(e);
    putchar(f);
    putchar('\n');
    putchar('S');
    putchar('\n');
    putchar('\101'); //A
    putchar('\055'); // 055是8进制，会先转为10进制然后再到 ASCII表中找相对都字符
    return 0;
}