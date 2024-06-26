#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if the node is a root of a binary tree
 * @node: The pointer to the node to check
 *
 * Return: if the node is the root - 1
 *         otherwise - 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
