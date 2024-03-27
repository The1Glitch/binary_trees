#include "binary_trees.h"

/**
 * binary_tree_node - Creates the binary tree node.
 * @parent: A pointer to the parent of the node to be cretaed.
 * @value: The value to be put in the same node.
 *
 * Return: If an error occurs - NULL.
 *         otherwise - The pointer goes to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
