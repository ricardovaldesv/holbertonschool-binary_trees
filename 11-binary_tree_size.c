#include "binary_trees.h"

/**
 *binary_tree_size- Function that that measures the size of a binary tree.
 *
 *@tree:  is a pointer to the root node of the tree to measure the size.
 *Return: If tree is NULL, your function must return 0.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t cont_L = 0, cont_R = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (1);

	cont_L += binary_tree_size(tree->left);
	cont_R += binary_tree_size(tree->right);

	if (tree->left == NULL)
		return (2);
	else if (tree->right == NULL)
		return (2);
	else
		return (cont_L + cont_R + 1);
}
