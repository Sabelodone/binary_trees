#include "binary_trees.h"

/**
 * binary_tree_leaves - Get the number of leaves in a binary tree.
 * @tree: A pointer to the root of the tree.
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_leaves = binary_tree_leaves(tree->left);
	size_t right_leaves = binary_tree_leaves(tree->right);

	return (left_leaves + right_leaves + (left_leaves == 0 && right_leaves == 0));
}
