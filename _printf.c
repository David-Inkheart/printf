#include "main.h"
/**
* _printf - Our own Implementation of printf
* @format: Format to print args
*
* Return: number of characters
*/
int _printf(const char *format, ...)
{
	va_list ap;
	int chars;

		fmsp spec[] = {
		{'c', char_print},
		{'s', str_print},
		{'%', print_per},
		{'i', print_int},
		{'d', print_int},
		{'r', print_rev},
		{00, NULL}
		};
	va_start(ap, format);

	chars = 0;
	if (format == NULL || ap == NULL)
		return (chars);
	chars = check_formatter(ap, format, spec);

	va_end(ap);
	return (chars);
}
