#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a tree
 * @tree: pointer to the root node of the tree
 *
 * Return: the size of the tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
        if (!tree)
                return (0);
        size_t left = binary_tree_size(tree->left);
        size_t right = binary_tree_size(tree->right);

        return (left + right + 1);
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
	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);
/*	int size = (int) binary_tree_size(tree);
	return (size % 2 ? 1 : 0);*/
}
