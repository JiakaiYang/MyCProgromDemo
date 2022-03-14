#include <iostream>

using namespace std;
int getMax(int*,int);
int main()
{   int arr[] = {123,11,23,441,512,6346,7,234};
    int length = sizeof(arr)/sizeof(arr[0]);
    cout<<"one another 3者或3者以上的相互代词   与each other 类似"<<endl;
    cout<<"arr数组的长度为:"<<sizeof(arr)/sizeof(arr[0])<<endl;
    cout<<(int)arr<<endl;  //第一个元素的地址
    cout<<(int)&arr[1]<<endl; //第二个元素的地址  相差4   int类型 站4个字节
    cout<<"数组中最大的数值为:"<<getMax(arr,length)<<endl;
    // string str[50];
    // str = getMax(arr,length) > 0 ? "答案正确" : "答案错误" ;  //为什么这里就错了呢？？
    // cout<<str<<endl;
    int a,b,c ;
    b = 10;
    c = 1000;
    a = 1>2? 22:44;
    c = (c > a? b:a);
    cout<<a<<endl;
    cout<<c<<endl;
    //c++中三目运算符返回的是变量名，可以继续赋值
    (c<a? c:b) = 100;
    cout<<c<<endl;
    return 0;
}
int getMax(int*arr,int length)
{   int result = -1;
    for(int i = 0;i<length;i++)
    {
        if(arr[i]>result)
        {
            result = arr[i];
        }
    }
    return result;
}

