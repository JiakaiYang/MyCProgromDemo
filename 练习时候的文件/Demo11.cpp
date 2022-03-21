#include <iostream>

using namespace std;
/*
已知一个单链表中每个结点存放一个整数，并且结点数不少于2，
请设计算法以判断该链表中第二项起的每个元素值是否等于其序号的平方减去其前驱的值，
若满足则返回ture，否则返回false.
*/
typedef struct Node
{
    int data;
    Node *next;
} Node;
int matchLink(Node *);
int main()
{

    return 0;
}
int matchLink(Node *pHead)
{
    //从哪个节点开始匹配  由题意可知
    Node *p = pHead->next->next;   //该节点的位置
    Node *p_preNode = pHead->next; //该节点的千亿节点是谁
    int i = 2;                     //该节点序号
    while (p != NULL)
    {
        if (p->data == i * i - p_preNode->data) // 如果为true 则继续比较
        {
            i++;           //好加1
            p_preNode = p; //现在这个节点当然就是下一个节点的前躯节点啦。
            p = p->next;
        }
        else
        {
            break;
        }
    }
    if (p != NULL)
        return 0;
    else
        return 1;
}
