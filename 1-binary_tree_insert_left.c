#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of a parent
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *old_left;

	if(parent == NULL)
		return (NULL);
	
	new_node = binary_tree_node(parent, value);
	if(new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		old_left = parent->left;
		new_node->left = old_left;
		old_left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
