#include "binary_trees.h"

/**
 * binary_tree_leaf - checks if node is leaf
 * @node: pointer to the node
 *
 * Return: 1 if leaf, 0 otherwise or node is NULL
 */
int binary_tree_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_height -meadures the height of a binary tree
 * @tree: pointer to rooot node of tree
 *
 * Return: heaight or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || binary_tree_leaf(tree))
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left >= right)
		return (1 + left);
	return (1 + right);
}
