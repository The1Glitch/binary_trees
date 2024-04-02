#include "binary_trees_.h"

/**
 * binary_tree_nodes - counts the node with at least 1 child in a binary tree
 * @tree: The pointer to the root of the tree to count the number of nodes
 *
 * Return: if the tree is NULL, the function must return 0, else return node count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree)
	{
		node += (tree->left || tree-right) ? 1 : 0;
		node += binary_tree_nodes(tree-left);
		node += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
