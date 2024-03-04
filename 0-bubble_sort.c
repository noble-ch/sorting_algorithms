#include "sort.h"

/**
 * swap_ints - Swap two integers.
 * @a: The first integer.
 * @b: The second integer.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort -array sorting in ascending order.
 * @array: An array of integers .
 * @size: The size .
 *
 * Description: returns the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	for (bubbly = false; !bubbly; len--) {
    bubbly = true;
    for (i = 0; i < len - 1; i++) {
        if (array[i] > array[i + 1]) {
            swap_ints(array + i, array + i + 1);
            print_array(array, size);
            bubbly = false;
        }
    }
}
}
