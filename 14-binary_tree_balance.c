#include "binary_trees.h"

/**
 * binary_tree_height - Measures height of a binary tree.
 * @tree: Tree to measure.
 *
 * Return: The height of the tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree.
 * @tree: Tree to measure.
 * Return: The balance factor.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree)
	{
		left_height = (int)binary_tree_height(tree->left);
		right_height = (int)binary_tree_height(tree->right);
		return (left_height - right_height);
	}

	return (0);
}
