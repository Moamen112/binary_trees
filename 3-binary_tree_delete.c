#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 *
 * @tree: A pointer to the root node of the tree to be deleted.
 *
 * Description: This function deletes an entire binary tree starting from the
 *              specified root node and frees the allocated memory.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
