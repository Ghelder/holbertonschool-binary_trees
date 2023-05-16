#include "binary_trees.h"

/**
 * binary_tree_postorder - function to traverse in post-order
 * @tree: Pointer to the root node
 * @func: Pointer to a function call for each node
 *
 * Return: Void
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *temp = tree;

	if (!tree || !func)
		return;

	binary_tree_postorder(temp->left, func);
	binary_tree_postorder(temp->right, func);
	func(temp->n);
}
