#include "binary_trees.h"

/**
 * helper - function to assist knowing which node is the root
 * @tree: the node to calculate the height
 * @root: the root node
 * Return: the true height of the root
*/

size_t helper(const binary_tree_t *tree, const binary_tree_t *root)
{
	size_t hl, hr;

	if (tree == NULL)
		return (0);
	hl = helper(tree->left, root) + 1;
	hr = helper(tree->right, root) + 1;

	if (tree == root)
		return (hl >= hr ? hl - 1 : hr - 1);
	else
		return (hl >= hr ? hl : hr);
}

/**
 * binary_tree_height - function to calculate the height of a tree
 * @tree: the node to get
 * Return: the hight of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	return (helper(tree, tree));
}
