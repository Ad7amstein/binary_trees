#include "binary_trees.h"

/**
 * depth - get the depth of the tree.
 *
 * @tree: pointer to the root of the tree.
 *
 * Return: tree depth.
 */
size_t get_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		return (get_depth(tree->left) + 1);
	return (0);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 *
 * @tree: pointer to the root of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	depth = get_depth(tree);
	return (is_perfect(tree, 0, depth));
}

/**
 * is_perfect - recursive function to check if the tree perfect.
 *
 * @tree: pointer to the tree root.
 * @depth: current depth.
 * @tree_depth: the depth of the tree.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int is_perfect(const binary_tree_t *tree, size_t depth, size_t tree_depth)
{
	if (depth == tree_depth && (tree->left == NULL && tree->right == NULL))
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (is_perfect(tree->right, depth + 1, tree_depth) && 
			is_perfect(tree->left, depth + 1, tree_depth));
	return (0);
}
