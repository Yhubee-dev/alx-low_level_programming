#include "main.h"

/**
 * checks for uppercase character
 * Return 1 if true abd 0 if false
 * */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
