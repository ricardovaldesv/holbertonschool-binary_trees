#include "binary_trees.h"

/**
 *binary_tree_nodes- Function that that counts the nodes with at
 *least 1 child in a binary tree
 *
 *@tree:  is a pointer to the root node of the tree to count the
 *number of nodes.
 *Return: If tree is NULL, your function must return 0.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t cont_L = 0, cont_R = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	cont_L += binary_tree_nodes(tree->left);
	cont_R += binary_tree_nodes(tree->right);

	if (tree->left == NULL)
		return (1);
	else if (tree->right == NULL)
		return (1);
	else
		return (cont_R + cont_L + 1);
}
