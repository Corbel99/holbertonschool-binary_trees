#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	return (0);

	if (tree->left == NULL && tree->right == NULL)
	return (0);

	left_height = binary_tree_height(tree->left);

	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

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

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 *
 * Return: 1 if the tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = (int)binary_tree_height(tree->left);
	right_height = (int)binary_tree_height(tree->right);

	if (binary_tree_is_full(tree) == 1 && left_height == right_height)
		return (1);

	binary_tree_is_perfect(tree->left);
	binary_tree_is_perfect(tree->right);

	return (0);
}
