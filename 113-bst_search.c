#include "binary_trees.h"

/**
 * check_value_right -  function to check node at right
 * @temp: pointer to the root node of the tree
 * @value: The value to be added
 *
 * Return: Pointer to the new node, NULL otherwise
 **/

bst_t *check_value_right(bst_t *temp, int value)
{
	int flag = 0;

	if (temp->right)
		temp = temp->right;
	while (1)
	{
		flag = 0;
		while (temp->right)
		{
			if (value == temp->n)
				return (temp);
			if (value < temp->n)
			{
				flag = 1;
				break;
			}
			temp = temp->right;
		}
		if (flag && temp->left)
			temp = temp->left;
		else if (temp->left && value < temp->n)
			temp = temp->left;
		else
		{
			if (temp->n == value)
				return (temp);
			return (NULL);
		}
	}
	return (NULL);
}

/**
 * check_value_left -  function to check node at left
 * @temp: pointer to the root node of the tree
 * @value: The value to be added
 *
 * Return: Pointer to the new node, NULL otherwise
 **/

bst_t *check_value_left(bst_t *temp, int value)
{

	int flag = 0;

	if (temp->left)
		temp = temp->left;
	while (1)
	{
		flag = 0;
		while (temp->left)
		{
			if (value == temp->n)
				return (temp);
			if (value > temp->n)
			{
				flag = 1;
				break;
			}
			temp = temp->left;
		}
		if (flag && temp->right)
			temp = temp->right;
		else if (temp->right && value > temp->n)
			temp = temp->right;
		else
		{
			if (temp->n == value)
				return (temp);
			return (NULL);
		}
	}
	return (NULL);
}

/**
 * bst_search -  function to search a value in a BST
 * @tree: pointer to the root node of the tree
 * @value: The value to be searched
 *
 * Return: Pointer to the node containing the value, NULL otherwise
 **/
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *temp = (bst_t *)tree;

	if (tree == NULL)
		return (NULL);

	if (tree->n < value)
		return (check_value_right(temp, value));
	else
		return (check_value_left(temp, value));
	return (NULL);
}
