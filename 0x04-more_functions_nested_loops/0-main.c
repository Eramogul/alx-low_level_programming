#include <stdio.h>
#include "main.h"

/**
 * main - Entry point for testing _isupper function
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	c = 'Z';
	printf("%c: %d\n", c, _isupper(c));
	c = 'z';
	printf("%c: %d\n", c, _isupper(c));
	c = 'G';
	printf("%c: %d\n", c, _isupper(c));
	c = 'g';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
