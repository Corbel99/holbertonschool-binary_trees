#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node
 *
 * Return: 1 if the tree is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_left, full_right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left != NULL && tree->right == NULL)
	|| (tree->left == NULL && tree->right != NULL))
		return (0);

	full_left = binary_tree_is_full(tree->left);
	full_right = binary_tree_is_full(tree->right);

	if (full_left == 1 && full_right == 1)
		return (1);

	return (0);
}
