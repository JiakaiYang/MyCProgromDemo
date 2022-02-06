#include <stdio.h>
int main(void)
{
    float f = 3.600;
    int i;
    i = (int)f; //强制类型转换
    printf("f = %f, i = %d\n", f, i);

    //  %模运算时 ’%’两边都得是整数型  可进行强制转换， 优先级高于’%’运算
    // 如：  （int）f%5
int modVal =(int)f%5;
 printf("两边为整数型(int)f%5模的值为：%d",modVal);
    return 0;
}