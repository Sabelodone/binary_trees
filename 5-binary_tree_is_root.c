#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root.
 * @node: A pointer to the node to check.
 *
 * Return: 1 if the node is a root, 0 otherwise.
 *
 * Description: Checks if a node is a root (i.e., has no parent)
 * and returns 1 if it's a root, otherwise returns 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);

	return (0);
}
