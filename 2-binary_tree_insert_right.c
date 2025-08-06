#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert a node as the right- hild of another node.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Description: If parent already has a right-child, the new node must
 * take its place, and the old right-child must be set as the
 * right-child of the new node.
 * Return:A pointer to the created node || NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* 1. Vérifier si le parent est valide */
	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/* 3. Lier le nouveau nœud */
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	   /* 4. Lier le parent au nouveau nœud */
	parent->right = new_node;

	return (new_node);
}
