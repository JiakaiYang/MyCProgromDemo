#include <stdio.h>
/**
 * @brief 
 * 
 * @param argc //传输的数组长度
 * @param argv //字符串的指针数组
 * @return int 
 * 
 * 在终端运行编译好的文件，用空格 隔开 参数(字符串数组)
 * eg: main函数传参.exe aaa asda  asdasd 
 * 文件名是第一个元素。
 */
//main函数传参
int main(int argc,char*argv[])
{
    printf("数组的长度为:%d",argc);
    for (int i = 0; i < argc; i++)
    {
        printf("第%d个元素为:%s\n",i+1,argv[i]);
    }
    
    return 0;
}