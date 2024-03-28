#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the leaves of a binary tree
 * @tree: Pointer to the node.
 * Return: void
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num_leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		num_leaves += 1;
	num_leaves += binary_tree_leaves(tree->left);
	num_leaves += binary_tree_leaves(tree->right);
	return (num_leaves);
}
