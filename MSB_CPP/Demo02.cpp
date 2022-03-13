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
    if( a == 1)
    {   
        a++;
        cout<<"goto flag."<<endl;
        goto FLAG;
    }
    return 0;
}