#include <iostream>
#include <malloc.h>
/**
 * 链式二叉树
 * https://www.bilibili.com/video/BV11s41167h6?p=75
 */
using namespace std;

typedef struct BTNode
{
    char data;
    BTNode *lChild; //左孩子
    BTNode *rChild; //  右孩子
} BTNode;

BTNode *createBTree();               //创建创建二叉树，返回根节点地址
void preorderTraversal(BTNode *);    //先序遍历
void postorderTraversal(BTNode *);   //后续遍历
void middleorderTraversal(BTNode *); //中序遍历
int main()
{
    BTNode *pt = createBTree();
    printf("先序遍历:\n");
    preorderTraversal(pt);
    printf("\n");

    printf("后序遍历:\n");
    postorderTraversal(pt);
    printf("\n");
    printf("中序遍历:\n");
    middleorderTraversal(pt);
    printf("\n");
    return 0;
}
void middleorderTraversal(BTNode *pT)
{
   
    if (NULL != pT->lChild)
    {
        middleorderTraversal(pT->lChild);
    }

    printf("%c ", pT->data);
    if (NULL != pT->rChild)
    {
        middleorderTraversal(pT->rChild);
    }
}
void preorderTraversal(BTNode *pT) // 先序遍历
{
    
    printf("%c ", pT->data);

    if (NULL != pT->lChild)
    {
        preorderTraversal(pT->lChild);
    }
    if (NULL != pT->rChild)
    {
        preorderTraversal(pT->rChild);
    }
}
void postorderTraversal(BTNode *pT) //后续遍历
{
    
    if (NULL != pT->lChild)
    {
        postorderTraversal(pT->lChild);
    }
    if (NULL != pT->rChild)
    {
        postorderTraversal(pT->rChild);
    }

    printf("%c ", pT->data);
}
BTNode *createBTree() //先静态创建一个链式二叉树。
{
    BTNode *pA = (BTNode *)malloc(sizeof(BTNode));
    BTNode *pB = (BTNode *)malloc(sizeof(BTNode));
    BTNode *pC = (BTNode *)malloc(sizeof(BTNode));
    BTNode *pD = (BTNode *)malloc(sizeof(BTNode));
    BTNode *pE = (BTNode *)malloc(sizeof(BTNode));
    pA->data = 'A';
    pB->data = 'B';
    pC->data = 'C';
    pD->data = 'D';
    pE->data = 'E';
    pA->lChild = pB;
    pB->lChild =NULL;
    pB->rChild =NULL;
    pA->rChild = pC;
    pC->lChild = pD;
    pC->rChild =NULL;

    pD->rChild = pE;
    pD->lChild =NULL;
    pE->lChild =NULL;
    pE->rChild =NULL;
    return pA; //返回根节点
}