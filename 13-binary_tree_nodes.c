#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with at least one child
 * @tree: Pointer to the root node
 *
 * Return: Number of non-leaf nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_left, nodes_right;

	if (tree == NULL)
		return (0);

	nodes_left = binary_tree_nodes(tree->left);

	nodes_right = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + nodes_left + nodes_right);
	else
		return (nodes_left + nodes_right);
}
