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

/**
 * binary_tree_size - measures the size of a tree
 * @tree: pointer to the root node of the tree
 *
 * Return: the size of the tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + right + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the binary tree
 *
 * Return: 0 if not perfect or NULL, otherwise 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, max_no_of_nodes = 1, size, i = 0;

	if (!tree)
		return (0);
	height = binary_tree_height(tree);
	for (i = 0; i < height + 1; i++)
	{
		max_no_of_nodes *= 2;
	}
	max_no_of_nodes -= 1;
	size = (int) binary_tree_size(tree);

	if (max_no_of_nodes == size)
		return (1);
	return (0);
}
