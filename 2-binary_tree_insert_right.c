#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserst a node as the right child
 * of another node
 * @parent: pointer to the node to insert the right child in
 * @value: value to insert in right child
 *
 * Return: pointer to the newly-inserted node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = binary_tree_node(parent, value);

	if (newNode && parent)
	{
		binary_tree_t *temp = parent->right;
		parent->right = newNode;
		if (temp)
		{
			newNode->right = temp;
			temp->parent = newNode;
		}
		return (newNode);
	}
	else
		return (NULL);
}
