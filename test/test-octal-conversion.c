#include "main.h"
#include <stdio.h>

int main(void)
{
	int a;
	int b;

	a = 145;
	b = _print("%o\n", a);
	printf("> %i\n", b);
	printf("%o\n", a);
	return (0);
}
