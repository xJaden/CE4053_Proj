#include <stdlib.h>
#include <stdio.h>
#include <os.h>

#define size_of_array           (10u)

struct heap {
    struct heap_node* array[size_of_array];
    int entries;
    struct heap_node*	min;
};

typedef struct heap HEAP;

struct heap_node {
    struct heap_node* 	next;
    struct heap_node*	child;
    unsigned int    	degree;
    OS_TASK_DEADLINE	value;
    OS_TCB* ptcb;
};
typedef struct heap_node NODE;
          
void free_node(NODE*);
NODE* find_min();
NODE* extract_min();
void heap_create();
void heap_node_create(OS_TCB*, OS_TASK_DEADLINE);