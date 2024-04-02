#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance of a binary tree
 * @tree: The pointer to hthe root of  the tree to measure the balance factor
 *
 * Return: if tree is NULL, return 0, else return balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary-tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - measures the heigth of a binary tree
 * @tree: The pointer to the root node of the tree to measure the height
 *
 * Return: if tree is NULL, the function must return 0, else return height
 */
sie_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t 1 = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((1 > r) ? 1: r);
	}
	return (0);
}
