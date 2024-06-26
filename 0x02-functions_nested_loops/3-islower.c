#include <stdio.h>
#include "main.h"

int main(void)
{
	char test_char = 'b';

	if (_islower(test_char))
	printf("%c is lowercase.\n", test_char);
	else
	printf("%c is not lowercase.\n", test_char);
	return (0);
}
