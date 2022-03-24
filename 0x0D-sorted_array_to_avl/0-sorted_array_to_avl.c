#include "binary_trees.h"


/**
 * insert - asdfasd
 * @array: asdfasd
 * @start: sadfas
 * @end: sadfa
 * @parent: asdf
 * Return: Pointer to the parent node
 */
static avl_t *insert(int *array, size_t start, size_t end, avl_t *parent)
{
	size_t pivot = 0;
	avl_t *new_node = NULL;

	if (start > end)
		return (NULL);
	new_node = malloc(sizeof(avl_t));
	if (!new_node)
		return (NULL);
	pivot = (start + end) / 2;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = array[pivot];
	new_node->parent = parent;
	if (pivot != start)
		new_node->left = insert(array, start, pivot - 1, new_node);
	if (pivot != end)
		new_node->right = insert(array, pivot + 1, end, new_node);
	return (new_node);
}

/**
 * sorted_array_to_avl - sadf
 * @array: sadfa
 * @size: asdfa
 * Return: asdfa
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	if (!array || !size)
		return (NULL);
	return (insert(array, 0, size - 1, NULL));
}
