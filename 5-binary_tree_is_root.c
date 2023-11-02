#include "binary_trees.h"

/**
 * binary_tree_is_root - function checks if a node is a root
 * @node: the node to be checked
 * Return: 0 if root or NULL and 1 otherwise
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent != NULL)
		return (0);
	else
		return (1);
}
