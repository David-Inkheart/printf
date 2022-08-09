#include "main.h"
/**
* _printf - Our own Implementation of printf
* @format: Format to print args
*
* Return: number of characters
*/
int _printf(const char *format, ...)
{
	unsigned int i;
	char *temp_str;

	if (format != NULL)
	{
		va_list ap;
		va_start(ap, format);
		
		i = 0;
		while (format && format[i] != '\0')
		{
			if (format[0] == 37 && format[1] == 00)
					return (-1);

			_putchar(format[i]);

			if (format[i] == 37)
			{
				temp_str = get_fmsp_func(format[i],ap);
				i++;
			}
			if (format[i] != 00)
				i++;
		}
	va_end(ap);
	return (i);
	}
return (0);
}
