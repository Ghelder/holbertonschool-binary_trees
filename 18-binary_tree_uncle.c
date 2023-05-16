#include "binary_trees.h"

/**
 * binary_tree_uncle - function to find the uncle of a node
 * @node: Pointer to the root node
 *
 * Return: The uncle node, NULL otherwise
 *
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	const binary_tree_t *temp = node;
	int value;

	if (temp == NULL || !temp->parent || !temp->parent->parent)
		return (NULL);
	value = temp->parent->n;
	if (temp->parent->parent->left->n == value)
		return (temp->parent->parent->right);
	return (temp->parent->parent->left);
}
