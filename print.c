#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 *_printf - Custom printf function.
 *@format: A format string containing format specifiers.
 *@...: Variable number of arguments to be formatted and printed.
 *
 *Return: The number of characters printed (excluding the null terminator).
 *Returns -1 on error.
 */


int _printf(const char *format, ...)
{
	int count = 0;
	const char *ptr = format;
	char *format_copy = NULL;

	va_list args;

	va_start(args, format);

	if (format == NULL)
	{
		return (-1);
	}

	format_copy = malloc(strlen(format) + 1);
	if (format_copy == NULL)
	{
		return (-1);
	}

	strcpy(format_copy, format);

	while (*ptr != '\0')
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr == '\0')
			{
				free(format_copy);
				return (-1);
			}
			else if (*ptr == 'd' || *ptr == 'i')
			{
				int value = va_arg(args, int);
				count += rune_d(value);

			}
			else if (*ptr == 'c')
			{
				int ch = va_arg(args, int);
				putchar(ch);
				count++;
			}
			else if (*ptr == 's')
			{
				const char *str = va_arg(args, const char *);
				fputs(str, stdout);
				count += strlen(str);
			}
			else if (*ptr == '%')
			{
				putchar('%');
				count++;
			}
		}
		else
		{
			putchar(*ptr);
			count++;
		}
		ptr++;
	}
	free(format_copy);

	va_end(args);
	return (count);
}
