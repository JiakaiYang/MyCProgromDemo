#include <stdio.h>
#include <malloc.h>
//https://www.bilibili.com/video/BV1Eb41147dK?share_source=copy_web 
void swap(int tree[], int j, int i)
{
    int temp = tree[i];
    tree[i] = tree[j];
    tree[j] = temp;
};
void heapify(int tree[], int n, int i)
{
    if (i > n)
    {
        return;
    }
    int c1 = 2 * i + 1; //左孩子
    int c2 = 2 * i + 2; //右孩子
    int max = i;
    if (c1 < n && tree[c1] > tree[max])
    {
        max = c1;
    }

    if (c2 < n && tree[c2] > tree[max])
    {
        max = c2;
    }
    if (max != i)
    {
        swap(tree, max, i);
        heapify(tree, n, max);
    }
}
void build_heap(int tree[], int length)
{
    int last_node = length - 1;
    int lNode_ParentN = (last_node - 1) / 2;
    int i;
    for (i = lNode_ParentN; i >= 0; i--)
    {
        heapify(tree, length, i);
    }
};
void heap_sort(int tree[],int length)
{
    build_heap(tree,length);
    int i ;
    for ( i = length-1 ; i >=0; i--)
    {
        swap(tree,i,0);  //根和最后一个节点调换位置
        heapify(tree,i,0);
    }
    
}
void treePrint(int *t, int size);
int main()
{
    int length = 6;
    int *t = (int *)malloc(sizeof(int) * length);
    printf("请输入%d个数:", length);
    for (int i = 0; i < length; i++)
    {
        scanf("%d/n", &t[i]);
    }
    //  heapify(t, length, 0); //这个递归有缺陷。如果只写到这，无法成堆结构
    //build_heap(t, length); //建一个堆。
    //堆排序
    heap_sort(t,length);
    treePrint(t, length);
    return 0;
}
void treePrint(int *t, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", t[i]);
    }
    printf("\n");
}