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
