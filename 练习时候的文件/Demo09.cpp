#include <iostream>
#include <malloc.h>
/**
 * @brief
 * 编写一个判断 ()[]{}是否完整的函数算法
 */
using namespace std;

int check(char* str, int length)
{
    char saveArr[100]; //储存括号
    int top = 0;
    int i = 0;
    int tag = 1; //如果有一个括号不匹配直接跳出循环
    while (i < length && tag != 0)
    { //寻找括号左边 并记录下来
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            top++;
            saveArr[top] = str[i];
        }
        //发现括号右边
        if (str[i] == ')')
        { //判断是否和括号左边匹配
            if (saveArr[top] == '(')
            { //如果匹配就 把上次记录的删掉。。继续执行
                top--;
            }
            else
            { //如果不匹配直接返回0
                tag = 0;
            }
        }
        //发现括号右边
        if (str[i] == ']')
        { //判断是否和括号左边匹配
            if (saveArr[top] == '[')
            { //如果匹配就 把上次记录的删掉。。继续执行
                top--;
            }
            else
            { //如果不匹配直接返回0
                tag = 0;
            }
        }
        //发现括号右边
        if (str[i] == '}')
        { //判断是否和括号左边匹配
            if (saveArr[top] == '{')
            { //如果匹配就 把上次记录的删掉。。继续执行
                top--;
            }
            else
            { //如果不匹配直接返回0
                tag = 0;
            }
        }
        i++;
    }
    if (top!=0) //检查如果数组里面还有括号，说明存在没有匹配的括号
    {  
        top=0;
        //返回false
        tag =0;
    }
    
    return tag;
}
int main()
{
    char strTest[] = "cao(asda)asdwdd[a]sd{a}";
    int length = sizeof(strTest) / sizeof(strTest[0]);
    int result = check(strTest, length);
    if (result)
    {
        printf("括号都匹配\n");
    }
    else
    {
        printf("存在不匹配的括号\n");
    }
    return 0;
}