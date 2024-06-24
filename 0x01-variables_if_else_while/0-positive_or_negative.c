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
 n = rand() - RAND-M/2;

 if (n > 0)
 {
 printf("kd is positive\n", n);
 }
 else if (n==0)
 {
 	printf("kd iz zero\n", n);
}
else
{printf("kd is negative\n", n);}
return (0);
