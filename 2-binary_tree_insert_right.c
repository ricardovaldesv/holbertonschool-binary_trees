#include "binary_trees.h"

/**
 *binary_tree_insert_right- Function that inserts a node as the
 *right-child of another node
 *@parent: is a pointer to the parent node of the node to create
 *@value: is the value to put in the new node
 *Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *current_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;

	if (parent->right == NULL)
	{
		new_node->left = NULL;
		new_node->right = NULL;
		new_node->parent = parent;
		parent->right = new_node;
		return (new_node);

	}
	else
	{
		new_node->left = NULL;
		current_node = parent->right;
		parent->right = new_node;
		new_node->parent = parent;
		current_node->parent = new_node;
		new_node->right = current_node;
		return (new_node);
	}
}
