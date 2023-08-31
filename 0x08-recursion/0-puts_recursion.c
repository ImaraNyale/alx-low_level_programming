#include "main.h"
/**
 * _puts_recursion - function prints a string
 * @s: characters to be prunted
 *
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}