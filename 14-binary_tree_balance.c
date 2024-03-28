#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: Pointer to the node.
 * Return: void
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	right_height += 1 + binary_tree_height(tree->right);
	left_height += 1 + binary_tree_height(tree->left);

	if (left_height > right_height)
		return (left_height);
	return (right_height);
}
/**
 * binary_tree_balance - that measures the balance factor of a binary tree.
 * @tree: Pointer to the node.
 * Return: void
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
