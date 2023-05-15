#include "binary_trees.h"
/**
 * binary_tree_delete -  function that deletes an entire binary tree
 * @tree: a pointer to the root node of the tree
 *
 * Return: Always void
 **/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *current;
	binary_tree_t *parent;

	if (tree == NULL)
		return;
	parent = NULL;

	while (1)
	{
		current = tree;
		while (current->left != NULL || current->right != NULL)
		{
			if (current->left != NULL)
				current = current->left;
			if (current->right != NULL)
				current = current->right;
		}
		if (current == tree)
		{
			free(current);
			return;
		}
		parent = current->parent;
		if (current->n > parent->n)
			parent->right = NULL;
		else
			parent->left = NULL;
		free(current);
	}
}
