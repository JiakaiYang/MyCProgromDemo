#include <stdio.h>
int main(void)
{
    char a, b, c;
    a = getchar();
    b = getchar();
    c = getchar();
    putchar('\n');
    // getchar  不仅能获取到终端看得到的字符，也能获取终端看不到的字符 如'\n'
    putchar(a);
    putchar(b); 
    putchar(c);
    putchar('\n');
    // putchar(getchar());   
    // putchar(getchar());
    // putchar(getchar());
    // putchar('\n');

    return 0;
}