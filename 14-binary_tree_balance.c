#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1, if node is a leaf, otherwise 0 or
 * if node is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->left) && !(node->right))
		return (1);
	else
		return (0);
}

/**
 * binary_tree_height - measures the height of a node
 * @tree: the pointer to the node to measure
 *
 * Return: height of the node.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_subtree, right_subtree;

	if (!tree)
		return (0);

	left_subtree = binary_tree_height(tree->left);
	right_subtree = binary_tree_height(tree->right);

	if (left_subtree < right_subtree)
		return (right_subtree + 1);
	else
		return (left_subtree + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: the balance factor ofthe binary tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	int left = (int) binary_tree_height(tree->left);
	int right = (int) binary_tree_height(tree->right);

	return (left - right);
}
