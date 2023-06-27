#include <stdio.h>

/**
 * swap int - Swapps the value of two integers.
 * @a: the first imteger top be swapped.
 * @b: the second integer to be swapped.
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
	/*tthe function that swaps the values of two integers. */
{
int temp= *a;
*a = *b;
*b = temp;
}
