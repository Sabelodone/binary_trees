#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: A pointer to the node to check.
 *
 * Return: 1 if the node is a leaf, 0 otherwise.
 *
 * Description: Checks if a node is a leaf (i.e., has no children)
 * and returns 1 if it's a leaf, otherwise returns 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
