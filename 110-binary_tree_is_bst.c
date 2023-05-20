#include "binary_trees.h"

/**
 * add_node - Function to add a node
 * @head: Pointer to the linked list
 * @str: The value to be added
 *
 * Adds a new node at the beginning of the linked list
 *
 * Return: Void
 */
void add_node(list_t **head, int str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return;

	temp->len = str;
	temp->next = (*head);
	(*head) = temp;
}

/**
 * free_list - Function to free linked list
 * @head: Pointer to the linked list
 *
 * Frees a linked list
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *temp = head, *lib = head;

	while (temp)
	{
		temp = temp->next;
		free(lib);
		lib = temp;
	}
}

/**
 * isBST -  function that checks the binary tree
 * @tree: pointer to the root node of the tree
 * @root: pointer to the linked list
 *
 * Return: Void
 **/
void isBST(binary_tree_t *tree, list_t **root)
{
	if (!tree)
		return;
	isBST(tree->left, root);
	add_node(root, tree->n);
	isBST(tree->right, root);
}

/**
 * is_sorted -  function that verify is a linked list is sorted in descending.
 * @root: pointer to the linked list
 *
 * Return: 1 if is sorted, 0 otherwise
 **/

int is_sorted(list_t *root)
{
	list_t *temp = root;

	while (temp->next)
	{
		if (temp->len <= temp->next->len)
			return (0);
		temp = temp->next;
	}
	return (1);
}

/**
 * binary_tree_is_bst - function to check if a binary tree is a BST
 * @tree: Pointer to the root node
 *
 * Return: 1 if BST(Binary Search Tree), 0 otherwise
 *
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	binary_tree_t *temp = (binary_tree_t *)tree;
	list_t *root = NULL;
	int result;

	if (!temp)
		return (0);

	isBST(temp, &root);

	result = is_sorted(root);
	free_list(root);
	return (result);
}
