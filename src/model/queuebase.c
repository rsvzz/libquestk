#include "../../inc/queuebase.h"
#include <stdlib.h>
#include <stdio.h>
void queue_list_append(QueueBase *qu, void *item)
{
    QueueBase *aux = malloc(sizeof(QueueBase));
    aux->item = item;
    aux->next = NULL;
    if (qu->front == NULL){
        qu->front = aux;
        qu->end_q = aux;
    }
    else{
        qu->end_q->next = aux;
        qu->end_q = aux;
    }
}

void queue_list_del_front(QueueBase *qu)
{
    if (qu->front != NULL)
    {
        QueueBase *aux = qu->front;
        qu->front = aux->next;
        free(aux);
    }
}
