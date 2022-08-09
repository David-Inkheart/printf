#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * get_fmsp_func - returns a pointer to the function that corresponds
 * to the specifier given as a parameter. Example: get_fmsp_func("c")
 * should return a pointer to the function op_add
 * @s: a character pointer pointing to the symbol
 *
 * Return: a string pointer
 */
char *get_fmsp_func(char s, va_list ap)
{
	fmsp spec[] = {
		{'c', char_print},
		{'s', str_print},
		{'%', percent_print},
		{00, NULL}
	};
	int i = 0;

	while (i < 3)
	{
		if (*s == *spec[i].flag)
			return (spec[i].fg(ap));
		i++;
	}
	return (NULL);
}
