#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)

{

    if (tree == NULL)
        return (0);

    return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
size_t binary_tree_height(const binary_tree_t *tree)

{

size_t left_h = 0;
size_t right_h = 0;

if (tree == NULL)
return (0);

if (tree->left)
left_h = 1 + binary_tree_height(tree->left);

if (tree->right)
right_h = 1 + binary_tree_height(tree->right);

return (left_h > right_h ? left_h : right_h);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height = 0;
    size_t size = 0;


    if (tree == NULL)
    { 
        return (1);
    }

    height = binary_tree_height(tree);
    size = binary_tree_size(tree);

    return (size == (1 << (height + 1)) - 1);
}
