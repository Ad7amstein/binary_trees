#include "binary_trees.h"

/**
 * binary_tree_is_full - a function to check if a tree is full
 * @tree: the root of the tree
 * Return: 0 if full and 1 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
	return (0);
}
