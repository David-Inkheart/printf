#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * char_print - prints a character
 * @ap: pointer to an unknown number of characters
 * @
 * Return: character
 */
char *char_print(va_list ap)
{
	char *p;

	p = malloc(sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	p[0] = va_arg(ap, int);

	va_end(ap);

	return (p);

	free(p);
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
char *str_print(va_list ap)
{
	char *p;

	p = va_arg(ap, char *);

	if (p == NULL)
		P = "(null)";
	return (p);
}




