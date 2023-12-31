#include "binary_trees.h"

/**
 *binary_tree_sibling- Function that finds the sibling of a node.
 *
 *@node:  is a pointer to the root node of the tree to find sibling.
 *Return: If tree and parent is NULL, return 0.
 *If node has no sibling, return NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if ((node->parent->left == NULL && node->parent->right != NULL)
		|| (node->parent->left != NULL && node->parent->right == NULL))
		return (NULL);

	if (node->parent->left->n == node->n)
		return (node->parent->right);
	else
		return (node->parent->left);
}

/**
 *binary_tree_uncle- Function that finds the uncle of a node.
 *
 *@node: is a pointer to the node to find the uncle.
 *Return: If tree is NULL, return 0.
 *If node has no uncle, return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||  node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == NULL ||
			(node->parent->parent->left == NULL ||
			 node->parent->parent->right == NULL))
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
