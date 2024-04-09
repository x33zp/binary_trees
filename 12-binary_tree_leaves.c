#include "binary_trees.h"

/**
 * binary_tree_leaf - cheaks if node is a leaf
 * @node: pointer to the node
 *
 * Retun: 1 if leaf, 0 otherwise or node is NULL
 */
int binary_tree_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to root node of tree
 *
 * Return: number of leaves, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	if (binary_tree_leaf(tree))
		return (1);
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	return (left + right);
}
