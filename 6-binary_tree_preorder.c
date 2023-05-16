#include "binary_trees.h"

/**
 * binary_tree_preorder - function to traverse in pre-roder
 * @tree: Pointer to the root node
 * @func: Pointer to a function call for each node
 *
 * Return: 1 node is leaf, 0 otherwise
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *temp = tree;

	if (!tree || !func)
		return;

	func(temp->n);
	binary_tree_preorder(temp->left, func);
	binary_tree_preorder(temp->right, func);
}
