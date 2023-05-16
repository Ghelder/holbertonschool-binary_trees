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
	const binary_tree_t *temp = node, *_node;
	int value;

	if (temp == NULL || !temp->parent || !temp->parent->parent)
		return (NULL);
	_node = temp->parent->parent;
	value = temp->parent->n;

	if (_node->left)
	{
		if (_node->left->n == value)
		{
			if (_node->right)
				return (_node->right);
			return (NULL);
		}
	}
	return (_node->left);
}
