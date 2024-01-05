#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node whose sibling is being found
 *
 * Return: pointer to the sibling of the node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->n == node->parent->left->n)
		return (node->parent->right);
	else
		return (node->parent->left);
}
