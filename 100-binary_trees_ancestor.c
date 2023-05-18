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

/**
 * binary_tree_ancestor - function to find the lowest common ancestor
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor, NULL otherwise
 *
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *temp = NULL;
	size_t depth_f, depth_s;
	int rst;

	depth_f = binary_tree_depth(first);
	depth_s = binary_tree_depth(second);

	rst = depth_f - depth_s;
	if (rst < 0)
	{
		temp = first;
		if (temp->n == second->parent->n)
			return ((binary_tree_t *)first);
		return ((binary_tree_t *)first->parent);
	}
	else
	{
		temp = second;
		if (temp->n == first->parent->n)
			return ((binary_tree_t *)second);
		return ((binary_tree_t *)second->parent);
	}
	return (NULL);
}
