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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the binary tree
 *
 * Return: 0 if not perfect or NULL, otherwise 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_full(tree->left) == binary_tree_is_full(tree->right)
			&& binary_tree_height(tree->left) == binary_tree_height(tree->right))
		return (1);
	else
		return (0);
}
