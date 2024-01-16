#include "main.h"
/*
 *
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

