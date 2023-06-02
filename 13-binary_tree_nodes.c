#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child
 * in a binary tree.
 *
 * @tree: A pointer to the root node of the tree to count the nodes.
 *
 * Return: The number of nodes with at least one child in the binary tree.
 * Returns 0 if the tree is NULL.
 *
 * Description: This function counts the number of nodes
 * in a binary tree that have at least one child.
 * It does not include leaf nodes (nodes with no children) in the count.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}

	return (nodes);
}
