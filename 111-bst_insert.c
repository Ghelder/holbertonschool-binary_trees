#include "binary_trees.h"

/**
 * check_node_right -  function to check node at right
 * @temp: pointer to the root node of the tree
 * @value: The value to be added
 *
 * Return: Pointer to the new node, NULL otherwise
 **/

bst_t *check_node_right(bst_t *temp, int value)
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
				return (NULL);
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
				return (NULL);
			if (value < temp->n)
			{
				temp->left = binary_tree_node(temp, value);
				return (temp->left);
			}
			temp->right = binary_tree_node(temp, value);
			return (temp->right);
		}
	}
	return (NULL);
}

/**
 * check_node_left -  function to check node at left
 * @temp: pointer to the root node of the tree
 * @value: The value to be added
 *
 * Return: Pointer to the new node, NULL otherwise
 **/

bst_t *check_node_left(bst_t *temp, int value)
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
				return (NULL);
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
				return (NULL);
			if (value < temp->n)
			{
				temp->left = binary_tree_node(temp, value);
				return (temp->left);
			}
			temp->right = binary_tree_node(temp, value);
			return (temp->right);
		}
	}
	return (NULL);
}
/**
 * bst_insert -  function to insert new node to BST
 * @tree: pointer to the root node of the tree
 * @value: The value to be added
 *
 * Return: Pointer to the new node, NULL otherwise
 **/
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *temp = *tree;

	if (!(*tree))
	{
		(*tree) = binary_tree_node(*tree, value);
		return (*tree);
	}
	if ((*tree)->n < value)
		return (check_node_right(temp, value));
	else
		return (check_node_left(temp, value));
	return (NULL);
}
