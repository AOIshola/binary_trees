#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserst a node as the left child
 * of another node
 * @parent: pointer to the node to insert the left child in
 * @value: value to insert in left child
 *
 * Return: pointer to the newly-inserted node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = binary_tree_node(parent, value);

	if (newNode && parent)
	{
		binary_tree_t *temp = parent->left;

		parent->left = newNode;
		if (temp)
		{
			newNode->left = temp;
			temp->parent = newNode;
		}
		return (newNode);
	}
	else
		return (NULL);
}
