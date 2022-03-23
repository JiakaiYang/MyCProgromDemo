#include <iostream>
#include <malloc.h>
/**
 * 顺序栈
 *
 *
 */
using namespace std;
typedef int data_t; //定义栈中数据的数据类型
typedef struct
{
    data_t *data; //用指针指向栈的存储空间
    int maxlen;   //当前栈的最大元素个数
    int top;      //指示栈顶位置(数组下标)的变量
} Seqstack;       //顺序栈类型定义

Seqstack *createStack(int len);     //创建栈
void stack_Clear(Seqstack *);       //清空栈
int stack_Empty(Seqstack *);        //判断栈是否为空
int stack_Full(Seqstack *);         //判断栈是否满
int stack_Push(Seqstack *, data_t); //入栈
data_t stack_Pop(Seqstack *);       //出栈
data_t stack_Top(Seqstack *);       //取栈顶
int main()
{
    Seqstack *ss = createStack(5);
    int i = 0;
    while (i < 5)
    {
        data_t value;
        cout << "请输入第" << i + 1 << "个数" << endl;
        cin >> value;
        stack_Push(ss, value);
        i++;
    }
    if(stack_Full(ss))
        cout<<"栈满了"<<endl;
    for (int j = 0; j < 5; j++)
    {
        if (j == 2)
        {
            data_t topData = stack_Top(ss);
            cout << topData << endl;
        }
        else
        {
            int tmp = stack_Pop(ss);
            cout << tmp << endl;
        }
    }
    return 0;
}
//创建栈
Seqstack *createStack(int len)
{
    Seqstack *ss;
    ss = (Seqstack *)malloc(sizeof(Seqstack));
    ss->data = (data_t *)malloc(sizeof(data_t) * len);
    ss->top = -1;
    ss->maxlen = len;
    return ss;
}
void stack_Clear(Seqstack *ss)
{
    ss->top = -1;
}
int stack_Empty(Seqstack *ss)
{
    if (ss->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int stack_Full(Seqstack *ss)
{
    if (ss->top == ss->maxlen - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int stack_Push(Seqstack *ss, data_t value)
{
    if (stack_Full(ss))
    {
        cout << "栈满请先出栈" << endl;
        return ss->top;
    }
    else if (stack_Empty(ss))
    {
        ss->top = 0;
        ss->data[ss->top] = value;
        return 0;
    }
    else
    {
        ss->top += 1;
        ss->data[ss->top] = value;
        return ss->top;
    }
}
data_t stack_Pop(Seqstack *ss)
{
    if (stack_Empty(ss))
    {
        cout << "出栈错误！栈为空!" << endl;
        return -1;
    }
    return ss->data[ss->top--];
}
data_t stack_Top(Seqstack *ss)
{
    return ss->data[ss->top];
}