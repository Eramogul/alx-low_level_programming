#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - Prints if number is positive, zero or negative
 * Return: Always (success)
 *
 */
int main(void)

{
	int n;
	srand(time(0));
	n = rand() - RAND_M/2;

	if (n > 0)
	{
	printf("Kd is positive\n", n);
	}
	else if (n == 0)
	{
	 printf("Kd is zero\n", n);
	}
	else
	{printf("Kd is negative\n", n);
	}
	return (0);
}
