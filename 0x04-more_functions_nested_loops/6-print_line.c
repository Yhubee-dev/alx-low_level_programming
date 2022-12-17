#include "main.c"
#inlcude <stdio.h>

/**
 * print_line - print the character "_" n times to draw a line 
 * numbers of character to draw; 'n'
 */

void print_line(int n)
{
	int times = n;
	for (times = n; times > 0; times--)
		_putchar('_');

	_putchar('\n');
}
