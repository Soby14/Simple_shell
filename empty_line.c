#include "shell.h"

/**
 * empt_line - Check if an input line is empty.
 *
 * Function examines the provided 'buff' line and determines whether is empty
 * (contains no visible characters or only white spaces).
 *
 * @buff: A pointer to the input line.
 *
 * Return: 1 if the line is empty, 0 otherwise (int).
 */
int empt_line(char *buff)
{
	int i;

	for (i = 0; buff[i] != '\0'; i++)
	{
		if (buff[i] != ' ')
			return (0);
	}
	return (1);
}

