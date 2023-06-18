#include <stdio.h>
/**
 * main - to print the size of data type
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char l;
	int r;
	long int s;
	long long int p;
	float q;

	printf("size of char: %lu byte(s)\n", sizeof(l));
	printf("size of int: %lu byte(s)\n", sizeof(r));
	printf("size of long int: %lu byte(s)\n", sizeof(s));
	printf("size of long long int: %lu byte(s)\n", sizeof(p));
	printf("size of a float: %lu byte(s)\n", sizeof(q));
	return (0);
}
