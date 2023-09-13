#include "binary_trees.h"

/**
 *binary_tree_height- Function that that measures the height of a binary tree
 *
 *@tree:  is a pointer to the root node of the tree to measure the height.
 *Return: nIf tree is NULL, your function must return 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t cont_L = 0, cont_R = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	cont_L += binary_tree_height(tree->left);
	cont_R += binary_tree_height(tree->right);

	if (tree->left == NULL)
		return (1);
	else if (tree->right == NULL)
		return (1);
	else if (cont_L > cont_R)
		return (cont_L + 1);
	else
		return (cont_R + 1);
}
