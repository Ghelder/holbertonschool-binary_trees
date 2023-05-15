#include "binary_trees.h"

/**
 * binary_tree_node - function to create a binary tree node
 * @parent: Pointer to the parent node
 * @value: The value to put in the new node
 *
 * Return: 1 on success, 0 otherwise
 *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->right = NULL;
	new->left = NULL;
	new->n = value;

	if (parent == NULL)
	{
		new->parent = NULL;
		return (new);
	}
	new->parent = parent;
	return (new);

}
