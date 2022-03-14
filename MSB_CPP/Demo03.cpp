#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a ;
    cout<<" 输入变量值(int 类型):"<<endl;
    cin>>a; //用大于号> 没有endl
    cout<<"输入的值为:"<<a<<endl;
FLAG:
    if(a ==2)
    {
        goto SECOND_FLAG; //直接跳转到这个标记位置代码。不执行下面的if代码
    }
    if( a == 1)
    {   
        a++;
        cout<<"goto flag."<<endl;
        goto FLAG;///如果标记存在直接跳转到该位置。
    }else{
        cout<<"a!=1"<<endl; 
    }
SECOND_FLAG:
    cout<<"SECOND_FLAG标记"<<endl;

    return 0;
}