#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *check_formatter - Function that checks if the character pointer is NULL, and
 *if it is NULL, it will return the number of charaters which is 0. Verifies
 *if the first character is a "%", if it is, move to the next character,
 *checks the array of structs, if they match, run the function. If not, print
 *the % and the character.
 *@ap: a pointer that is initiated by va_list
 *@format: a pointer variable that points to what's being passed to _printf
 *@spec: The array of structs that is initated in the _printf function
 *Return: The number of characters that was printed
 */
int check_formatter(va_list ap, const char *format, fmsp spec[])
{
	int formatter, i, j, chars;

	formatter = i = j = chars = 0;
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; j < 7; j++)
			{
				if (spec[j].flag == format[i])
				{
					chars += (spec[j].fg(ap));
					formatter = 1;
				}
			}
			if (formatter == 0)
			{
				i--;
				_putchar(format[i]);
				i++;
				_putchar(format[i]);
				chars += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			chars++;
		}
	}
	return (chars);
}
/**
 *print_rev - a function that prints the string in reverse
 *@ap: pointer to unspecified arguments
 *the string
 *Return: - the number of character of reversed string.
 */
int print_rev(va_list ap)
{
	char *s;
	int i, chars;

	chars = 0;
	s = va_arg(ap, char *);
	for (i = 0; s[i] != '\0'; i++)
		;
	for (; i != 0; i--)
	{
		_putchar(s[i - 1]);
		chars++;
	}
	return (chars);
}
/**
 * print_number - A function that prints out numbers
 * @n: number to print
 * Return: the number
 */
int print_number(int n)
{
	int sign, ten, chars;

	chars = 0;
	sign = 1;
	ten = 1000000000;
	if (n > 0)
	{
		n = n * -1;
		sign = sign * -1;
	}
	if (n != 0)
	{
		while (n / ten == 0)
		{
			ten = ten / 10;
		}
		if (sign == 1)
		{
			_putchar('-');
			chars++;
		}
		while (ten >= 1)
		{
			_putchar(-(n / ten) + '0');
			chars++;
			n = n % ten;
			ten = ten / 10;
		}
	}
	else
	{
		_putchar('0');
		chars++;
	}
	return (chars);
}
