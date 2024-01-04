#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root node
 * @node: pointer to the node to check
 *
 * Return: 0 if node is NULL or not a root, otherwise 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->parent))
		return (1);
	else
		return (0);
}
