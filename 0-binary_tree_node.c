#include "binary_trees.h"

/**
 *binary_tree_node- Function that creates a binary tree node
 *@parent: is a pointer to the parent node of the node to create
 *@value: is the value to put in the new node
 *Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node;
	
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent == NULL)
	{
		new_node->parent = NULL;
		parent = new_node;
		return (parent);
	}

	else if (parent != NULL && parent->left == NULL)
	{
		parent->left = new_node;
		new_node->parent = parent;
		return (new_node);

	}
	else
	{
		parent->right = new_node;
		new_node->parent = parent;
		return (new_node);
	}
}
