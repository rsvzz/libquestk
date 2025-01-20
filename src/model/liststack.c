#include "../../inc/liststack.h"
#include <stdio.h>
#include <stdlib.h>

void add_item_stack(StackBase *list, void *item)
{
    stack_list_append(list, item);
}

void del_item_stack(StackBase *list)
{
    stack_list_del_top(list);
}

ListStack *create_list_stack()
{
    ListStack *ps = malloc(sizeof(ListStack));
    StackBase stack;
    stack.top = NULL;
    stack.add = add_item_stack;
    stack.del_top = del_item_stack;
    ps->stack = stack;
    //printf("create stack \n");
    return ps;
}