#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a node
 * @tree: the pointer to the node to measure
 *
 * Return: height of the node.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_subtree;
	size_t right_subtree;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_subtree = binary_tree_height(tree->left) + 1;
	right_subtree = binary_tree_height(tree->right) + 1;

	if (left_subtree < right_subtree)
		return (right_subtree);
	else
		return (left_subtree);
}
