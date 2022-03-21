#include <iostream>
#include <malloc.h>

using namespace std;
/**
 * 写一个链栈
 *
 */
//节点结构
typedef struct Node
{
    /* data */
    int value;
    Node *next;
} Node;

Node *createStack();                 //创建一个空栈
void entryStack(Node *ls, int data); //入栈
int outStack(Node *ls);              //出栈
int main()
{
    Node *p = createStack();

    int n, data;
    cout << "请输入入栈数据的个数(int):" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "请输入入栈的数据(int):" << endl;
        cin >> data;
        entryStack(p,data);
    }
    cout<<"================"<<endl;
    for (int i = 0; i < n; i++)
    {
        int outTmp = outStack(p);
        cout << outTmp << endl;
    }
    return 0;
}
Node *createStack()
{
    Node *ls = (Node *)malloc(sizeof(Node));
    // ls = NULL;
    if (ls == NULL)
    {
        cout << "初始化栈成功" << endl;
    }
    return ls;
}

void entryStack(Node *ls, int data)
{
    //创建一个结点
    Node *newNode = (Node *)malloc(sizeof(Node));

    newNode->value = data;
    newNode->next = ls->next;
    ls->next = newNode;
}
//出栈
int outStack(Node *ls)
{
    Node *p = ls->next;
    ls->next = p->next;
    int value = p->value;
    free(p);
    return value;
}