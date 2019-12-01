#ifndef __STRUCTS_T_H__
#define __STRUCTS_T_H__

#define STACK_MAX_SIZE 1
#define MAX_SIZE_ARRAY_SYMS 

typedef struct
{
    char *sym_array[100];
    int size;
} stack_arr;

typedef struct stack_lnode
{
    char *sym;
    struct stack_lnode *next_sym;
} stack_list;

#endif
