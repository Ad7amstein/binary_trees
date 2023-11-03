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


/**
 * binary_tree_balance - function to calculate the balance factor if a tree
 * @tree: the root node
 * Return: the balance factor or 0 if NULL root
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		l = binary_tree_height(tree->left) + 1;
	if (tree->right)
		r = binary_tree_height(tree->right) + 1;

	return (l - r);
}
