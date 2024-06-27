#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long fib1 = 1, fib2 = 2, next_fib;

	printf("%lu, %lu", fib1, fib2);

	for (i = 2; i < 50; i++)
	{
	next_fib = fib1 + fib2;
	printf(", %lu", next_fib);
	fib1 = fib2;
	fib2 = next_fib;
	}

	printf("\n");
	return (0);
}
