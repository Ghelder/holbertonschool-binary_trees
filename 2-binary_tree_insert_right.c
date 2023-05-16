#include "binary_trees.h"

/**
 * binary_tree_insert_right - function to create a binary tree node
 * @parent: Pointer to the parent node
 * @value: The value to put in the new node
 *
 * Return: Pointer to the new node, NULL otherwise
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->right = NULL;
	new->left = NULL;
	new->n = value;

	new->parent = parent;
	if (parent->right)
	{
		parent->right->parent = new;
		new->right = parent->right;
	}
	parent->right = new;
	return (new);
}
