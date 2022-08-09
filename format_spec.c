#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * char_print - prints a character
 * @ap: pointer to unspecified arguments
 * @
 * Return: character
 */
int char_print(va_list ap)
{
	char p;

	p = va_arg(ap, int);
	_putchar(p);

	return (0);
}
/**
* percent_print - passes the format
* @ap: Pointer to an unknown number of arguments
*
* Return: The percent found
*/
char *percent_print(va_list ap)
{
	char *p;

	p = "%";
	if (va_arg(ap, int) == *p)
	{
		return (p);
	}
	return (p);
}

/**
 * str_print - prints a str
 * @ap: pointer to an unknown length string
 * @
 * Return: string
 */
int str_print(va_list ap)
{
	int i, countchars;
	char *p;

	countchars = 0;
	p = va_arg(ap, char *);

	if (p == NULL)
	{
		p = "(null)";
	}
	i = 0;
	while (p[i] != '\0')
	{
		_putchar(p[i]);
		i++;
		countchars++;
	}
	return (countchars);
}
/**
 *print_int - A function that prints out the integer
 *@args: a variable that takes in a varrying amount of function arguments
 *Return: The character
 */
int print_int(va_list args)
{
	int n, chars;

	n = va_arg(args, int);
	chars = print_number(n);
	return (chars);
}
/**
 *print_per - a function that accounts for %% as an input
 *@p: A parameter that stores a % and prints it
 *Return: Return the % character
 */
int print_per(int p)
{
	p = '%';
	_putchar(p);
	return (1);
}
