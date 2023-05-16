#include "binary_trees.h"
/**
 * binary_tree_is_full -  function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if it's a binary tree is full
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if (tree->right && tree->left)
	{
		return (binary_tree_is_full(tree->right) *
				binary_tree_is_full(tree->left));
	} else if (!tree->right && !tree->left)
	{
		return (1);
	}
	return (0);
}
