#include "binary_trees.h"/

/**
 * preorder_traverse - Traverse a binary tree and count leaves.
 * @tree: Pointer to the root node of the binary tree to traverse.
 * @leaves: Pointer to the number of leaves of the binary tree.
 */

void preorder_traverse(const binary_tree_t *tree, size_t *leaves)
{
	if (tree == NULL)
		return;

	if (tree->left == NULL && tree->right == NULL)
		*leaves += 1;

	preorder_traverse(tree->left, leaves);
	preorder_traverse(tree->right, leaves);
}

