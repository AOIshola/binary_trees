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
 * binary_tree_nodes - counts the nodes with at least a child
 * @tree: pointer to the root node of the tree to count the
 * number of nodes
 *
 * Return: number of nodes with at least a child.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree || binary_tree_is_leaf(tree))
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	return (left + right + 1);
}
