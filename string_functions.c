#include "shell.h"

/**
 * _strncmp - Compare two strings lexicographically.
 *
 * This function compares two strings pointed to by 's1' and 's2' and determine
 * their lexicographical order. It returns an integer value indicating the
 * result of the comparison.
 *
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: An integer result of the comparison.
 */

int _strncmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{

		if (*s1 != *s2)
			return (*s1 - *s2);

		s1++;
		s2++;
	}
	return (0);
}
/**
 * _strncpy - Copy the string pointed to by src to dest.
 *
 * This function copies the string pointed to by 'src' into the memory location
 * pointed to by 'dest' and returns a pointer to 'dest'.
 *
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: A pointer to the destination buffer 'dest'.
 */

char *_strncpy(char *dest, char *src)
{
	char *c = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (c);
}

/**
 * _splits- Split a string into an array using a specified separator.
 *
 * Function splits the input string 'strn' into multiple substrings using the
 * provided separator 'sep' and returns an array containing the divided parts.
 *
 * @strn: The input string to be split.
 * @sep: The separator used for splitting the string.
 *
 * Return: An array of strings containing the divided parts.
 */

char **_splits(char *strn, char *sep)
{
	char *aux, **split_strn;
	int i = 0;

	aux = strtok(strn, sep);
	split_strn = (char **)_calloc(100, sizeof(char *));

	if (!split_strn)
	{
		free(split_strn);
		return (NULL);
	}

	while (aux)
	{
		split_strn[i] = aux;
		aux = strtok(NULL, sep);
		i++;
	}
	return (split_strn);
}

/**
 * _strncat - Concatenate two strings.
 *
 * This function concatenates the string pointed to by 'src' onto the end of
 * the string pointed to by 'dest' and returns a pointer to 'dest'.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be concatenated.
 *
 * Return: A pointer to the destination string 'dest'.
 */

char *_strncat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a += 1)
	{}

	for (b = 0; src[b] != '\0'; b += 1)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
/**
 * _strnlen - Calculate the length of a string.
 *
 * This function calculates the length of the input string 's' and returns the
 * number of characters in the string.
 *
 * @s: Pointer to the string for which the length is to be calculated.
 *
 * Return: The length of the string as an integer.
 */

int _strnlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

