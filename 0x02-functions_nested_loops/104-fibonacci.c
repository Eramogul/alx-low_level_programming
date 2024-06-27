#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned int a = 1, b = 2;
	unsigned long int a_high, a_low, b_high, b_low, high, low;
	unsigned long max = 1000000000;

	printf("%lu, %lu", a, b);

	for (count = 2; count < 98; count++)
	{
	if (b > max)
	{
	a_high = a / max;
	a_low = a % max;
	b_low = b / max;
	b_low = b % max;

	high = a_high + b_high;
	low = a_low + b_low;

	if (low > max)
	{
	high++;
	low %= max;
	}

	printf(", %lu%09lu", high, low);

	a = b;
	a_high = b_high;
	a_low = b_low;
	b_high = high;
	b_low = low;

	}
	else
	{
	unsigned long next = a + b;
	printf(", %lu", next);
	a = b;
	b = next;
	}
	}

	printf("\n");
	return (0);
}
