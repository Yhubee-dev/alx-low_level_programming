#include <stdio.h>

/**
 *main - print 00 to 99 with no duplicates digits or combos: no 11, no 10 (01)
 *Return: Always 0 (Success)
 */

int main(void)
{
	int ones;
	int tens;

	for (ten = '0'; tens <= '9'; tens++) /*ones's ten+1*/
	{
		for (ones = (tens + 1); ones <= '9'; ones++)
		{

			putchar (tens);
			putchar (ones);
		
			if (tens != '8' || ones != '9' /*print commas*/
			{
				putchar(',');
				putchar(' ');
			}
		}
																													
