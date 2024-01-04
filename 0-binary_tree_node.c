#include "binary_trees.h"


/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer tothe parent node of the node to create
 * @value: value to go into the node
 *
 * Return: pointer to new node created or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
	if (newNode)
	{
		newNode->parent = parent;
		newNode->n = value;
		newNode->left = NULL;
		newNode->right = NULL;

		return (newNode);
	}
	else
		return (NULL);
}
