#include "binary_trees.h"

static int is_perfect_recursive(const binary_tree_t *tree, int depth, int level);
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree.
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);

	depth = binary_tree_height(tree);
	return (is_perfect_recursive(tree, depth, 0));
}
/**
 * is_perfect_recursive - Checks if all leaves are at the same level.
 * @tree: A pointer to the current node.
 * @depth: The depth of the first leaf found.
 * @level: The current level of the node.
 * Return: 1 if all leaves are at the same level, 0 otherwise.
 */
static int is_perfect_recursive(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect_recursive(tree->left, depth, level + 1) &&
			is_perfect_recursive(tree->right, depth, level + 1));
}
