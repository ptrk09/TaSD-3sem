#include "../include/stack_list.h"

int32_t stack_list_push(stack_list **stack_list_node, char *const new_sym) {
    stack_list *new_node = (stack_list *) malloc(sizeof(stack_list));
    if (!new_node)
        return STACK_OVERFLOW;

    new_node->next_sym = *stack_list_node;
    new_node->sym = new_sym;
    *stack_list_node = new_node;
    return SUCCESS;
}

/*int32_t stack_list_pop(stack_list **stack_lnode, stack_list **stack_lnode_freed) {
    if (*stack_lnode == NULL)
        return STACK_UNDERFLOW;
    
    stack_list *node_freed = (stack_list *) malloc(sizeof(stack_list));
    if (node_freed == NULL)
        return MEM_WAS_NOT_ALLOC;
    
    node_freed = *stack_lnode;
    *stack_lnode = (*stack_lnode)->next_sym;
    node_freed->next_sym = *stack_lnode_freed;
    *stack_lnode_freed = node_freed;
    return SUCCESS; 
}

void stack_list_print(stack_list *stackListNode) {
    while (stackListNode)
    {
        if (!stackListNode->nextWord)
            printf("%s\n", stackListNode->word);
        else
            printf("%s -> ", stackListNode->word);
        stackListNode = stackListNode->nextWord;
    }
}

void stack_list_condition(stack_list *stackListNode, stack_list *stackListNodeFreed) {
    if (!stackListNode) {
        printf("\n\tСостояние стека: стек пуст (количество элементов в стеке  =  0)\n");
    } else {
        printf("\n\tЗанятые адреса стека:   ");
        while (stackListNode) {
            if (!stackListNode->nextWord)
                printf("%p\n", stackListNode);
            else
                printf("%p | ", stackListNode);
            stackListNode = stackListNode->nextWord;
        }
    }
    if (stackListNodeFreed) {
        printf("\tОсвобождённые адреса стека:   ");
        while (stackListNodeFreed) {
            if (!stackListNodeFreed->nextWord)
                printf("%p\n", stackListNodeFreed);
            else
                printf("%p | ", stackListNodeFreed);
            stackListNodeFreed = stackListNodeFreed->nextWord;
        }
    }
}*/

