#include "binary_trees.h"

/**
 * binary_tree_height -  function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: the size of the tree
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL)
		return (0);

	if (tree->right)
		right = right + 1 + binary_tree_height(tree->right);
	if (tree->left)
		left = left + 1 + binary_tree_height(tree->left);

	if (right > left)
		return (right);
	return (left);
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
	size_t height_l = 0, height_r = 0;

	if (temp == NULL)
		return (0);

	if (!temp->left && !temp->right)
		return (1);
	if (!temp->left || !temp->right)
		return (0);
	height_l = binary_tree_height(temp->left);
	height_r = binary_tree_height(temp->right);

	if (height_l != height_r)
		return (0);
	return (1);
}
