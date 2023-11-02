#include "binary_trees.h"

/**
 * recurse_for_height - measure height
 * @tree: tree to measure
 *
 * Return: height
 */
size_t recurse_for_height(const binary_tree_t *tree)
{
	size_t heightL, heightR;

	if (!tree)
		return (0);

	heightL = recurse_for_height(tree->left);
	heightR = recurse_for_height(tree->right);

	if (heightL > heightR)
		return (heightL + 1);
	else
		return (heightR + 1);
}

/**
 * binary_tree_height - measure height of tree
 * @tree: tree to measure
 *
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (recurse_for_height(tree) - 1);
}
