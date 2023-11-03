#include "binary_trees.h"

/**
 * binary_tree_sibling - function to retreive the binary tree sibling
 * @node: the node to get its sibling
 * Return: the sibling node or NULL otherwise
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
