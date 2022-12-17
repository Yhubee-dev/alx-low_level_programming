#include "main.h"
#incude <stdio.h>

/**
 * print_square - printa square of #'s given size
 * draw size: size
 */

void print_square(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= size; column++)
			{
				_putchar('#');
			}		
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
