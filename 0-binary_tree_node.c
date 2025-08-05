#include "binary_trees.h"

/**
 * binary_tree_node - Write a function that creates a binary tree node
 * @parent: this pointer parent binary trees
 * @value: this value new node
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
                                                            /* Vérifie si l'allocation de mémoire a échoué */
	if (new_node == NULL)
		return (NULL);
	                                                        /* Initialise le nouveau nœud avec les valeurs fournies */
	new_node->n = value;
	new_node->parent = parent;
	                                                        
	new_node->left = NULL;
	new_node->right = NULL;

	                                                        /* Renvoie le pointeur vers le nœud fraîchement créé et initialisé */
	return (new_node);
}
