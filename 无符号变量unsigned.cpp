#include <stdio.h>
int main(void)
{
    unsigned int a;
    a = sizeof(unsigned int);
    printf(" unsigned int所占字节为:%d\n", a);
    a = sizeof(short);
    printf(" short所占字节为:%d\n", a);
    a = sizeof(long);
    printf(" long所占字节为:%d\n", a);
    return 0;
}