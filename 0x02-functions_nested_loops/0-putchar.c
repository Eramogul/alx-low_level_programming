#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
	return (0);
}
