#include "../../inc/treeitem.h"
#include <stdlib.h>

TreeItem* create_tree_item(int base, void* item){
    TreeItem *item_t = malloc(sizeof(TreeItem));
    item_t->base = base;
    item_t->item = item;
    return item_t;
}