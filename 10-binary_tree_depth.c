#include "binary_trees.h"

/**
 *binary_tree_depth- Function that that measures the depth
 *of a node in a binary tree
 *
 *@tree:  is a pointer to the root node of the tree to measure the depth.
 *Return: If tree is NULL, your function must return 0.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t cont = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	cont += binary_tree_depth(tree->parent);

	if (tree->parent == NULL)
		return (1);
	else
		return (cont + 1);
}
