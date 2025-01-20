#include "../../inc/treelist.h"
#include <stdlib.h>

TreeList* create_tree_list(){
    TreeList* list = malloc(sizeof(TreeList));
    TreeBinary item;
    item.item = NULL;
    list->tree = item;
    return list;
}