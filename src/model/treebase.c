#include "../../inc/treebase.h"
#include <stdlib.h>
#include <stdio.h>
void add_tree_find(TreeItem *, TreeBinary *);
void add_item(TreeItem *, TreeBinary *);
TreeItem *find_item_tree_l_r(TreeBinary *, TreeItem);
TreeBinary *empty_r_l();

TreeBinary *empty_r_l()
{
    TreeBinary *tb = malloc(sizeof(TreeBinary));
    tb->item = NULL;
    tb->left = NULL;
    tb->right = NULL;

    return tb;
}
/// @brief add item tree
/// @param item add
/// @param tree
void add_item(TreeItem *it, TreeBinary *tree)
{

    if (tree->item == NULL)
    {
        tree->item = it;
        tree->left = empty_r_l();
        tree->right = empty_r_l();
    }
    else if (tree->item->base != it->base)
    { // deferentes
        add_tree_find(it, tree);
    }
}

void add_tree_find(TreeItem *item, TreeBinary *tree)
{
    TreeItem *item_t = tree->item;

    if (item_t->base > item->base)
    {
        // left
        add_item(item, tree->left);
    }
    else
    {
        // right
        // printf("2) id %d \n ", item->base);
        add_item(item, tree->right);
    }
}
void append_tree_base(TreeBinary *tree, TreeItem *item)
{

    if (tree->item == NULL)
    {
        tree->item = item;
        tree->left = empty_r_l();
        tree->right = empty_r_l();
    }
    else
    {
        add_tree_find(item, tree);
    }
}

void delete_tree_base(TreeBinary *, TreeItem *)
{
}

TreeItem *find_tree_base(TreeBinary *tree, TreeItem *item)
{
    /*
    1) comparar item raiz
    2) comprar item ramas left and right
    */

    if (tree->item != NULL)
    {
        if (tree->item->base == item->base)
        {
            printf("encontrado raiz");
            return tree->item;
        }
        else
        {
            if (item->base > tree->item->base)
            {
                // right
                return find_item_tree_l_r(tree->right, *item);
            }
            else
            {
                // left
                return find_item_tree_l_r(tree->left, *item);
            }
        }
    }
    else
    {
        return NULL;
    }
}
/// @brief Comparando ramas en busca de datos.
/// @param tree
/// @param item
/// @return
TreeItem *find_item_tree_l_r(TreeBinary *tree, TreeItem item)
{
    if (tree->item != NULL)
    {
        if (item.base == tree->item->base)
        {
            return tree->item;
        }
        else if (item.base > tree->item->base)
        {
            return find_item_tree_l_r(tree->right, item);
        }
        else
        {
            return find_item_tree_l_r(tree->left, item);
        }
    }
    else
    {
        return NULL;
    }
}
