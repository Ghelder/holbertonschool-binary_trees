#include "binary_trees.h"

/**
 * binary_tree_leaves - function to count leaves
 * @tree: Pointer to the root node
 *
 * Return: The number of leaves, 0 otherwise
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;
	size_t leaves;

	if (temp == NULL)
		return (0);
	if (!temp->left && !temp->right)
		return (1);

	leaves = binary_tree_leaves(temp->left);
	leaves += binary_tree_leaves(temp->right);
	return (leaves);
}
