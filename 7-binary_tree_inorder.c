#include "binary_trees.h"

/**
 * binary_tree_inorder - function to traverse the binary trees inorder
 * @tree: the root of the tree
 * @func: the function to be called on the node
 * Return: none
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
