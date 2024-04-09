#include "binary_trees.h"

/**
 * binary_tree_leaf - checks if node is leaf
 * @node: pointer to node to check
 *
 * Return: 1 if node is leaf, otherwose 0 or if node is NULL
 */
int binary_tree_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_node - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to root of the node
 *
 * Return: numberr, otherwise 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || binary_tree_leaf(tree))
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	return (1 + left + right);
}
