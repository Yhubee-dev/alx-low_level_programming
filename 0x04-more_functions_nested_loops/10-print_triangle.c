#include "main.h"
#include <stdio.h>

/**
 * printing triangle - print triangle with #'s and of a given size
 * size: size of triangleto draw
 */

void print_triangle(int size)
{
	int height;
	int width;
	int draw;

	if (size <= 0)
		_putchar('\n');

	for (height = 1; height <= size; height++)
	{
		for (width = 1; width <= (size - height); width++)
			_putchar(' ');

		for (draw = 1; draw <= height; draw++)
			putchar('#');

		_putchar('\n');
	}
}
