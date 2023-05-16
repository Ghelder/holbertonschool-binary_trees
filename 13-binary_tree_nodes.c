#include "binary_trees.h"
/**
 * binary_tree_nodes -  function that counts the nodes with at least 1 child
 * in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: the number of nodes with at least 1 child
 **/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t right = 0;

	if (tree == NULL)
		return (0);

	if (tree->right && tree->left)
	{
		right += 1 + binary_tree_nodes(tree->right) +
			binary_tree_nodes(tree->left);
	} else
	{
	if (tree->right)
		right = right + 1 + binary_tree_nodes(tree->right);
	else if (tree->left)
		right = right + 1 + binary_tree_nodes(tree->left);
	}
	return (right);
}
