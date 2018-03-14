#ifndef   AVL_H_NEW
#define   AVL_H_NEW



#include <stdlib.h>
#include <stdio.h>
#include <os.h>

// An AVL tree node
struct Node
{
    int key;
    OS_TCB *p_tcb[5];
    struct Node *left;
    struct Node *right;
    int num;
    int height;
};
typedef struct Node Node;
struct Node *avlInit(void);
struct Node* newNode(OS_TCB *p_tcb, int key);
struct Node* insert(struct Node* node, int key, OS_TCB *p_tcb);
struct Node *node_find(Node* node, int key, OS_TCB *p_tcb );;
struct Node* deleteNode(struct Node* root, int key);
struct Node * minValueNode(Node* node);

#endif