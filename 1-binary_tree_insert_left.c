#include "binary_trees.h"


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* 1. Vérifier si le parent est valide */
	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/* 3. Lier le nouveau nœud */
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	   /* 4. Lier le parent au nouveau nœud */
	parent->left = new_node;

	return (new_node);
}
