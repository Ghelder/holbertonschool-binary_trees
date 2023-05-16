#include "binary_trees.h"

/**
 * binary_tree_depth - function to measure the depth of a node
 * @tree: Pointer to the node to check
 *
 * Return: The depth of a node, 0 otherwise
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	const binary_tree_t *temp = tree;

	if (tree == NULL)
		return (0);

	for (depth = 0; temp->parent; depth++)
		temp = temp->parent;
	return (depth);
}
