#include "binary_trees.h"

/**
 * tree_height - Measures the height of a binary tree for balance calculation
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = tree->left ? 1 + tree_height(tree->left) : 1;
	right_h = tree->right ? 1 + tree_height(tree->right) : 1;

	return (left_h > right_h ? left_h : right_h);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = (int)tree_height(tree->left);

	if (tree->right)
		right_height = (int)tree_height(tree->right);

	return (left_height - right_height);
}
