#include "binary_trees.h"

/**
 * binary_tree_size - function to calculate the full size of a tree
 * @tree: the root node
 * Return: the size of the tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);

	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);

	return (l + r + 1);
}
