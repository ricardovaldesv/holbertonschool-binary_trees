#include "binary_trees.h"

/**
 * binary_tree_height - goes through a binary tree using pre-order trave
 * @tree: pointer to the root node of the tree to traverse
 * Return: measures the height of a binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t countleft = 0, countright = 0;

	if (tree == NULL)
		return (0);

	countleft += binary_tree_height(tree->left);
	countright += binary_tree_height(tree->right);

	if (countleft > countright)
		return (countleft + 1);
	else
		return (countright + 1);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree:  pointer to the root node balance factor
 * Return: 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 *binary_tree_is_full- Function  checks if a binary tree is full
 *
 *@tree:  is a pointer to the root node of the tree to delete.
 *Return: If tree is NULL, return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}

/**
 *binary_tree_size- Function that that measures the size of a binary tree.
 *
 *@tree:  is a pointer to the root node of the tree to measure the size.
 *Return: If tree is NULL, your function must return 0.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t cont_L = 0, cont_R = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
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



/**
 *binary_tree_is_perfect- Function that checks if a binary tree is perfect.
 *
 *@tree:  is a pointer  to the root node of the tree to check.
 *Return: If tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_balance(tree) == 0 && binary_tree_is_full(tree) == 1
			&& (binary_tree_size(tree->left) - binary_tree_size(tree->right) == 0))
		return (1);
	else
		return (0);
}
