#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the nodes.
 *
 * Return: The number of nodes with at least 1 child in the tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_with_children = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		nodes_with_children = 1;

	nodes_with_children += binary_tree_nodes(tree->left);
	nodes_with_children += binary_tree_nodes(tree->right);

	return (nodes_with_children);
}
