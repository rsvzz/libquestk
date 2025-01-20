#include "../../inc/stackbase.h"
#include <stdlib.h>
#include <stdio.h>
void stack_list_append(StackBase *tk, void* item)
{
    StackBase *aux = malloc(sizeof(StackBase));
    aux->item = item;
    if (tk->top == NULL) //validar si es con top o con tk
        aux->next = NULL;

    else
        aux->next = tk->top;

    tk->top = aux;
}

void stack_list_del_top(StackBase *tk)
{
    if (tk != NULL)
    {
        StackBase *aux = tk->top;
        tk->top = aux->next;
        free(aux);
    }
}
