#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth of the node in a binary tree
 * @tree: The pointer to the node to measure the depth
 *
 * Return: if the tree is NULL, the function should return 0, 
 *         else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
