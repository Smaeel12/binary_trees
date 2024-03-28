#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse a tree following the preorder traversal
 * @tree: Pointer to root node to begin traversal at.
 * @func: Pointer to a function to call on tree node's data..
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
