#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf.
 *
 * @node: pointer to node to be checked.
 *
 * Return: 1 if the node is leaf, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
