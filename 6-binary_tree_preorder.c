#include "binary_trees.h"

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
    {
        return;
    }
    func(tree->n);                           /* on traite la racine EN 1er.
                                     On appelle la fonction 'func' passée en paramètre en lui donnant
                                     la valeur 'n' du nœud actuel comme argument.*/
                                        
    binary_tree_preorder(tree->left,func);
    binary_tree_preorder(tree->right,func);

}
