#include "binary_trees.h"

/**
 * count_nodes_with_child - Helper function to count nodes with children
 * @node: The current node
 * Return: The number of nodes with children
 */

size_t count_nodes_with_child(const binary_tree_t *node)
{
	size_t left, right;

	if (node == NULL)
		return (0);

	left = count_nodes_with_child(node->left);
	right = count_nodes_with_child(node->right);

	if (node->left || node->right)
		return (left + right + 1);
	else
		return (left + right);
}

/**
 * binary_tree_nodes - Function to count nodes with at least one child
 * @tree: The root node of the binary tree
 * Return: The number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (count_nodes_with_child(tree));
}
