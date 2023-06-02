#include "binary_trees.h"

/**
 * create_binary_tree_node - Create a binary tree node.
 *
 * @parent: A pointer to the parent of the node.
 * @value: The value to be stored in the new node.
 *
 * Return: If the allocation fails - NULL, else - a pointer to the new node.
 */
binary_tree_t *create_binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return NULL;

	new_node->data = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return new_node;
}
