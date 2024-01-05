#include "binary_trees.h"

/**
 * binary_tree_is_full - checks is a binary tree is full
 * @tree: pointer to the root node of the binary tree
 *
 * Return: 1 if tree is full, 0 is not full or tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
