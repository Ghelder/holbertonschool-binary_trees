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

/**
 * binary_tree_is_perfect - function to check if binary is perfect
 * @tree: Pointer to the root node
 *
 * Return: 1 if perfect, 0 otherwise
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;
	size_t size_l = 0, size_r = 0;

	if (temp == NULL)
		return (0);

	if (!temp->left && !temp->right)
		return (1);
	if (!temp->left || !temp->right)
		return (0);
	size_l = binary_tree_size(temp->left);
	size_r = binary_tree_size(temp->right);

	if (size_l != size_r)
		return (0);
	return (1);
}
