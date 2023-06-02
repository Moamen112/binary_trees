#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: The balance factor of the binary tree.
 * Returns 0 if the tree is NULL.
 *
 * Description: This function calculates the balance factor of a binary tree by
 *      computing the difference in height between the left and right subtrees.
 *      The balance factor indicates whether the tree is balanced (0),
 *      left-heavy (negative value), or right-heavy (positive value).
 */


int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the binary tree. Returns 0 if the tree is NULL.
 *
 * Description:This function calculates the height of a binary tree by counting
 *   the number of edges on the longest path from the root node to a leaf node.
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lef = 0, rig = 0;

		lef = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rig = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		return ((lef > rig) ? lef : rig);
	}

	return (0);
}
