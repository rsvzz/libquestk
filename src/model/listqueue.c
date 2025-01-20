#include "../../inc/listqueue.h"
#include <stdlib.h>
#include <stdio.h>

void add_item_front(QueueBase *list, void *item)
{
    queue_list_append(list, item);
    printf("add \n");
}

void del_item_front(QueueBase *list)
{
    queue_list_del_front(list);
}

ListQueue *create_list_queue()
{
    ListQueue *ps = malloc(sizeof(ListQueue));
    QueueBase queue;
    queue.front = NULL;
    queue.end_q = NULL;
    queue.add = add_item_front;
    queue.del_front = del_item_front;
    ps->queue = queue;
    //printf("create queue \n");
    return ps;
}