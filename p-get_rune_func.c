#include <stdio.h>
#include <unistd.h>
#include "main.h"

int putchar_file(char c)
{
/*	char buffer[1];*/
	int bytes_written;

/*	buffer[0] = c; */

	bytes_written = write(1, &c, 1);

	if (bytes_written == -1)
	{
		write(STDERR_FILENO, "Write error\n", 12);
	}
	return (bytes_written == 1) ? 1 : -1;
}
/**
 *rune_d - Print an integer value.
 *@value: The integer value to be printed.
 *Return: Always returns 0.
 */
int rune_d(int value)
{
	int i;
	char buffer[30];
	int count = 0;

	snprintf(buffer, sizeof(buffer), "%d", value);

	for (i = 0; buffer[i] != '\0'; i++)
	{
		count += putchar_file(buffer[i]);
	}
	return count;
}
/**
 *rune_c - Print a character value.
 *@value: The character value to be printed.
 *Return: Always returns 0.
 */
int rune_c(int value)
{
	putchar_file(value);
	return (0);
}

/**
 *rune_s - Print a string.
 *@value: The integer representation of a string to be printed.
 *Return: Always returns 0.
 */
int rune_s(int value)
{
	int i;

	const char *str = (const char *)&value;
	int length = strlen(str);
	for (i = 0; i < length; i++)
	{
		putchar_file(str[i]);
	}
	return (length);
}
/**
 *get_rune_func - Get a function pointer based on a character.
 *@s: The character to look up in the function pointer array.
 *Return: A function pointer corresponding to the character, or NULL if not found.
 */
int (*get_rune_func(char *s))(int)
{
	frog sword[] = {
		{"d", rune_d},
		{"i", rune_d},
		{"c", rune_c},
		{"s", rune_s},
		{NULL, NULL}
	};

	int i = 0;

	while (sword[i].skittle != NULL)
	{
		if (strcmp(sword[i].skittle, s) == 0)
		{
			return (sword[i].f);
		}
		i++;
	}

	return (NULL);
}
