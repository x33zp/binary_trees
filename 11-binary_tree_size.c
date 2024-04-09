#include "binary_trees.h"

/**
 * binary_tree_size - measures size of a binary tree
 * @tree: pointer to root node of tree
 *
 * Return: size, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	return (1 + left + right);
}
