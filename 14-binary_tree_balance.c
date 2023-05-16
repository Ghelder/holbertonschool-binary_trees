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
 * binary_tree_balance - function to measure the balance factor
 * @tree: Pointer to the root node
 *
 * Return: The balance factor, 0 otherwise
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;
	size_t height_l = 0, height_r = 0;
	int b_factor;

	if (temp == NULL)
		return (0);

	if (temp->left)
	{
		if (!temp->left->left && !temp->left->right)
			height_l++;
		else
			height_l += binary_tree_height(temp->left) + 1;
	}
	if (temp->right)
	{
		if (!temp->right->left && !temp->right->right)
			height_r++;
		else
			height_r += binary_tree_height(temp->right) + 1;
	}

	b_factor = height_l - height_r;

	return (b_factor);
}
