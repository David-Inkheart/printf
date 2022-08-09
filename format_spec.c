#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * char_print - prints a character
 * @ap: pointer to an unknown number of characters
 * @
 * Return: sum of a and b
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

	p = 37;
	if (va_arg(ap, int) == *p)
	{
		return (p);
	}
}
