#include "binary_trees.h"

/**
 * get_root - function to get toot
 * @nodo: Pointer to the node to check
 *
 * Return: The root node
 *
 */

binary_tree_t *get_root(binary_tree_t *nodo)
{
	binary_tree_t *temp = nodo;

	while (temp->parent)
		temp = temp->parent;
	return (temp);
}

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
 * check_ancestor - function to check ancestor
 * @rst: Pointer to the node to check
 * @t_first: Pointer to the node to check
 * @t_second: Pointer to the node to check
 *
 * Return: the ancestor, NULL otherwise
 */
binary_tree_t *check_ancestor(int rst, binary_tree_t *t_first,
			      binary_tree_t *t_second)
{
	binary_tree_t *temp = NULL;

	if (rst < 0)
	{
		temp = t_first;
		while (t_second != temp->parent)
		{
			if (t_second == temp)
				return (temp);
			t_second = t_second->parent;
		}
		return (t_second);
	}
	else if (rst == 0)
	{
		temp = t_first;
		while (temp != t_second)
		{
			temp = temp->parent;
			t_second = t_second->parent;
		}
		return (temp);
	}
	else
	{
		temp = t_second;
		while (t_first != temp->parent)
		{
			if (t_first == temp)
				return (temp);
			t_first = t_first->parent;
		}
		return (t_first);
	}
	return (NULL);
}

/**
 * binary_trees_ancestor - function to find the lowest common ancestor
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor, NULL otherwise
 *
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *t_first = (binary_tree_t *)first, *root_first, *ancestor;
	binary_tree_t *t_second = (binary_tree_t *)second, *root_second;
	size_t depth_f, depth_s;
	int rst;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return (t_first);

	depth_f = binary_tree_depth(first);
	depth_s = binary_tree_depth(second);

	rst = depth_f - depth_s;

	root_first = get_root(t_first);
	root_second = get_root(t_second);
	if (root_first == root_second)
	{
		ancestor = check_ancestor(rst, t_first, t_second);
		return (ancestor);
	}
	return (NULL);
}
