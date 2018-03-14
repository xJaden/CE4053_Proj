#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <os.h>

#define LCHILD(x) 2 * x + 1
#define RCHILD(x) 2 * x + 2
#define PARENT(x) (x - 1) / 2

typedef struct node {
    int data ;
    OS_TCB *p_tcb;
} node1 ;

typedef struct minHeap {
    int size ;
    node1 *elem ;
} minHeap ;

void initMinHeap();
void swap(node1 *n1, node1 *n2);
void heapify(minHeap *hp, int i);
void buildMinHeap(minHeap *hp, int *arr, int size);
void insertHeapNode(minHeap *hp, int data, OS_TCB *p_tcb);
void deleteHeapNode(minHeap *hp);
int getMaxHeapNode(minHeap *hp, int i);
void deleteMinHeap(minHeap *hp);
void inorderTraversal(minHeap *hp, int i);
void preorderTraversal(minHeap *hp, int i);
void postorderTraversal(minHeap *hp, int i);
void levelorderTraversal(minHeap *hp);
OS_TCB *peekTopNode(minHeap *hp);
node1 *peekTopNode1(minHeap *hp);