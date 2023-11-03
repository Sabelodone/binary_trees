#include "binary_trees.h"

/**
 * binary_tree_nodes - Get the number of nodes in a binary tree with children.
 * @tree: A pointer to the root of the tree.
 * Return: The number of nodes with children.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t nodes_with_children = (tree->left || tree->right) ? 1 : 0;
	size_t left_nodes = binary_tree_nodes(tree->left);
	size_t right_nodes = binary_tree_nodes(tree->right);

	return (nodes_with_children + left_nodes + right_nodes);
}
