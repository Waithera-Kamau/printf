#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char a;
	char *b;

	a = 'H';
	b = "hello";

	a = _printf("%c, %s\n", a, b);
	return (0);
}
