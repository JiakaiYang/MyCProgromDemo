#include <stdio.h>
#include "define_a.cpp"
extern int a;
extern int add(int,int);
int main(void)
{   int b = a;
    printf("%d\n", b);
    printf("%d\n", add(1,2));
    return 0;
}