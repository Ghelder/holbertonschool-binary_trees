#include "binary_trees.h"

/**
 * array_to_bst -  function to build a BST from array
 * @array: The array to be used to create the BST
 * @size: The number of elements in a array
 *
 * Return: Root of the BST, NULL otherwise
 **/
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t i;

	if (!array)
		return (NULL);

	for (i = 0; i < size; i++)
		bst_insert(&tree, *(array + i));
	return (tree);
}
