#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a node
 * @tree: the pointer to the node to measure
 *
 * Return: height of the node.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t left_subtree = binary_tree_height(tree->left);
	size_t right_subtree = binary_tree_height(tree->right);

	if (left_subtree < right_subtree)
		return (right_subtree + 1);
	else
		return (left_subtree + 1);
}
