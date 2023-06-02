#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root.
 *
 * @node: A pointer to the node to check.
 *
 * Return: 1 if the node is a root, otherwise 0.
 *
 * Description: This function checks if the given
 *  node is a root node of a binary tree.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
