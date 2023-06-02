#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using post-order traversal.
 *
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *
 * Description: This function performs a post-order traversal of a binary tree,
 *              starting from the root node and applying the specified function
 *              to each visited node.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
