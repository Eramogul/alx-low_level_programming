#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a = 1, b = 2, next;
	unsigned long int a_high, a_low, b_high, b_low, next_high, next_low;
	int i;

	printf("%lu, %lu", a, b);

	for (i = 2; i < 98; i++)
	{
	if (a + b < a)
	{
	a_high = a / 1000000000;
	a_low = a % 1000000000;
	b_high = b / 1000000000;
	b_low = b % 1000000000;

	next_low = a_low + b_low;
	next_high = a_high + b_high + (next_low / 1000000000);
	next_low = next_low % 1000000000;
	printf(", %lu%09lu", next_high, next_low);

	a_high = b_high;
	a_low = b_low;
	b_high = next_high;
	b_low = next_low;

	a = a_high * 1000000000 + a_low;
	b = b_high * 1000000000 + b_low;
	}
	else
	{
	next = a + b;
	printf(", %lu", next);
	a = b;
	b = next;
	}
	}

	printf("\n");
	return (0);
}
