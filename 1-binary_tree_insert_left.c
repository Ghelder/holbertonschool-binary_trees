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

	new = malloc(sizeof(binary_tree_t));
	new->n = value;
	new->right = NULL;
	new->left = NULL;
	if (new == NULL)
		return (NULL);
	if (parent == NULL)
	{
		new->parent = NULL;
		return (new);
	}
	if (parent->left == NULL)
	{
		new->parent = parent;
		parent->left = new;
		return (parent);
	}
	parent->left->parent = new;
	new->left = parent->left;
	new->parent = parent;
	parent->left = new;
	return (new);
}
