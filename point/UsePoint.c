#include <stdio.h>

void exchange(int *, int *);
int main(void)
{
    int a, b;               //定义两个int类型的变量
    int *a_point, *b_point; //定义两个指向int类型地址的指针       类型 ×指针变量名
    a_point = &a;
    b_point = &b;
    a = 11;
    b = 22;
    printf("a = %d \n b = %d \n", a, b);
    printf(" * a_pront = %d , * b_point = %d\n", *a_point, *b_point);
    printf(" 变量a 的地址为:%d\n", &a);
    printf(" 指针a_point 的值为:%d\n", a_point);

    //传地址改变函数外变量的值
    int out_a, out_b;
    out_a = 110;    //a = 110  b = 119
    out_b = 119;
    exchange(&out_a,&out_b);
    printf("a = %d , b = %d \n",out_a,out_b);
    return 0;

}
void exchange(int * a, int * b)
{
    int tmp;
    tmp = *a;   //通过交换地址所指向的值 的方式实现 修改函数外变量的值。
    *a = *b;
    *b = tmp;
}