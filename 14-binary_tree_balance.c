#include "binary_trees.h"

/**
 *binary_tree_balance- Function that that measures
 *the balance factor of a binary tree
 *
 *@tree:  is a pointer to the root node of the tree
 *to measure the balance factor 
 *Return: If tree is NULL, return 0.
 */

int binary_height(const binary_tree_t *tree)
{
	int cont_L = 0, cont_R = 0;

	if (tree == NULL)
		return (0);


	if (tree->left == NULL && tree->right == NULL)
		return (1);

	cont_L += binary_height(tree->left);
	cont_R += binary_height(tree->right);

	if (tree->left == NULL)
		return (1);
	else if (tree->right == NULL)
		return (1);
	else if (cont_L > cont_R)
		return (cont_L + 2);
	else
		return (cont_R + 2);
}

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return(binary_height(tree->left) - binary_height(tree->right));
}
