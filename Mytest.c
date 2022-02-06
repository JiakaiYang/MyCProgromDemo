#include <stdio.h>
#include <math.h>
int main(void)
{       
    float f;
    f = 123e-2;
    char a = 97;
    int lengthInt = sizeof(int);
    int lengthChar = sizeof(char);
    int lengthFloat = sizeof(float);
    int lengthDouble = sizeof(double);
        printf("I am very handsome!!\n");
        printf("f = %lf\n",f); //    别老是忘记变量名啊！！
        printf("int 变量的长度为：%d 字节\n",lengthInt);
        printf("int 变量的长度为：%d 字节\n",lengthChar);
        printf("int 变量的长度为：%d 字节\n",lengthFloat);
        printf("int 变量的长度为：%d 字节\n",lengthDouble);
        printf("char a = 97 的输出值为:%c",a);
    return 0;
}