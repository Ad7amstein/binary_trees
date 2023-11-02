#include "binary_trees.h"

/**
 * binary_tree_delete - this function frees a whole binary tree
 * @tree: the root of the tree to be freed
 * Return: none
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
