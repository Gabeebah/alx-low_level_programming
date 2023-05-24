#include "function_pointers.h"
/**
 * array_iterator - Exacutes a function given as a
 * parameter on each element of an array
 * @array: an array
 * @size: the size
 * @action: a pointer to the functio to be exacuted
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
