#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * of another node
 * @parent: Pointer to the parent node
 * @value: The value to put in the new node
 *
 * Return: 1 on success, 0 otherwise
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	{
		return (parent);
	}

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->right = NULL;
	new->left = NULL;

	new->parent = parent;
	if (parent->left)
	{
		parent->left->parent = new;
		new->left = parent->left;
	}
	parent->left = new;
	return (new);
}
