#include <iostream>
#include<string>
#define DOG_DOG "gou"
using namespace std;
int main()
{   int i =55;
    int b = 100;
    const char str1_Smart[20] = "I'm very smart!";
    const string words = "我太帅了"; //c++ 有string 类型。。  使用的时候记得加头文件#include<string>
    cout<<str1_Smart<<endl;
    cout<<"I am very handsome!Iam very happy!  i ="<<i<<" ,b = "<<b<<endl;
    cout<<"short类型数据所占的内存空间为"<<sizeof(short)<<endl;
    cout<<words<<endl;
    cout<<DOG_DOG<<endl;
    //科学计数法 e3 == 10^3
    float f1 = 3.1415926f;  //默认只输出6位有效数字。
    float f2 = 3e3;
    float f3 = 3e-3;
    cout<<"f1 = "<<f1<<" , f2 = "<<f2<<" , f3 = "<<f3<<endl;
    return 0;
}