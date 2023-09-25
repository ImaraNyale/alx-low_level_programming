#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion: function prints string in reverse
 * @s: string to be printed
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s++;
		_print_rev_recursion(s);
		s--;
		putchar(*s);

	}

	else
		return;
}
