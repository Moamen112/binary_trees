#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 *
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: The depth of the node in the binary tree.
 * Returns 0 if the node is NULL.
 *
 * Description: This function calculates the depth
 *				of a given node in a binary tree.
 *				The depth is defined as the number of edges from the root
 *				node to the specified node.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
