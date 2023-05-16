#include "binary_trees.h"
/**
 * binary_tree_size -  function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: the size of the tree
 **/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL)
		return (0);

	if (tree->right)
		right = right + 1 + binary_tree_size(tree->right);
	if (tree->left)
		left = left + 1 + binary_tree_size(tree->left);
	if (tree->parent == NULL)
		right += 1;
	return (right + left);
}
