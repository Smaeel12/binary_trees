#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the leaves in a binary tree
 * @tree: pointer node binary tree
 * Return: Number the leaves in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_left = 0, num_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		num_left = binary_tree_nodes(tree->left);
		num_right = binary_tree_nodes(tree->right);
		return (num_left + num_right + 1);
	}
	return (0);
}
