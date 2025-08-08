#include "binary_trees.h"


int binary_tree_is_perfect(const binary_tree_t *tree)
{
    
    size_t height = 0;
    size_t size = 0;


    if (tree == NULL)
    { 
        return (0);
    }

    height = binary_tree_height(tree);
    size = binary_tree_size(tree);

return (size == ((size_t)1 << (height + 1)) - 1);
}
