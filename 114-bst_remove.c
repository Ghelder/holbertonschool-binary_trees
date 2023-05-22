#include "binary_trees.h"

/**
 * two_children -  function to delete node if has two children
 * @root: pointer to the root node of the tree
 *
 * Return: Void
 **/
void two_children(bst_t **root)
{
	bst_t *temp = *root, *remove = NULL;

	if (temp->right->left)
	{
		temp->n = temp->right->left->n;
		remove = temp->right->left;
		temp->right->left = NULL;
		free(remove);
	}
	else if (temp->right->right)
	{
		temp->n = temp->right->n;
		remove = temp->right;
		temp->right->right->parent = temp;
		temp->right = temp->right->right;
		free(remove);
	}

}

/**
 * remove_node -  function to remove a node
 * @root: pointer to the root node of the tree
 *
 * Return: Void
 **/
void remove_node(bst_t **root)
{
	bst_t *temp = *root, *remove = NULL;

	if (temp->left && temp->right)
		two_children(&temp);
	else if (temp->left || temp->right)
	{
		if (temp->left)
		{
			temp->n = temp->left->n;
			remove = temp->left;
			temp->left = NULL;
			free(remove);
		}
		else if (temp->right)
		{
			temp->n = temp->right->n;
			remove = temp->right;
			temp->right = NULL;
			free(remove);
		}
	}
	else
	{
		if (temp->parent)
		{
			if (temp->parent->right->n == temp->n)
			{
				remove = temp->parent->right;
				temp->parent->right = NULL;
				free(remove);
			}
			else if (temp->parent->left->n == temp->n)
			{
				remove = temp->parent->left;
				temp->parent->left = NULL;
				free(remove);
			}
		}
	}
}

/**
 * check_value_right -  function to check node at right
 * @root: pointer to the root node of the tree
 * @value: The value to be added
 *
 * Return: Pointer to the new node, NULL otherwise
 **/
bst_t *check_value_right(bst_t **root, int value)
{
	bst_t *temp = *root;
	int flag = 0;

	while (1)
	{
		flag = 0;
		while (temp->right)
		{
			if (value == temp->n)
				remove_node(&temp);
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
				remove_node(&temp);
			return (NULL);
		}
	}
	return (NULL);
}

/**
 * check_value_left -  function to check node at left
 * @root: pointer to the root node of the tree
 * @value: The value to be added
 *
 * Return: Pointer to the new node, NULL otherwise
 **/
bst_t *check_value_left(bst_t **root, int value)
{
	bst_t *temp = *root;
	int flag = 0;

	while (1)
	{
		flag = 0;
		while (temp->left)
		{
			if (value == temp->n)
				remove_node(&temp);
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
				remove_node(&temp);
			return (NULL);
		}
	}
	return (NULL);
}

/**
 * bst_remove -  function to remove a node in BST
 * @root: pointer to the root node of the tree
 * @value: The value to be removed in the BST
 *
 * Return: The root node of BST, NULL otherwise
 **/
bst_t *bst_remove(bst_t *root, int value)
{
	if (!root)
		return (NULL);

	if (root->n < value)
		check_value_right(&root, value);
	else if (root->n > value)
		check_value_left(&root, value);
	else
		check_value_right(&root, value);

	return (root);
}
