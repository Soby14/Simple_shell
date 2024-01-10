#include "shell.h"

/**
 * search_path - Search for a file within the specified paths.
 *
 * This function searches for the executable file 'command' within a set of
 * specified paths and returns the full path to the file if found.
 *
 * @cmd: command name of the executable file to search for.
 *
 * Return: A pointer to the full path of the 'command'
 */

char *search_path(char *cmnd)
{
	char *path = _getenviron("PATH"), *path_cpy;
	char **path_split;
	char *path_concat = NULL;
	int i = 0, path_length = 0;
	struct stat info;

	if (stat(cmnd, &info) == 0)
		return (cmnd);

	path_cpy = malloc(_strnlen(path) + 1);

	path_cpy = _strncpy(path_cpy, path);
	path_split = _splits(path_cpy, ":");

	while (path_split[i])
	{
		path_length = _strnlen(path_split[i]);

		if (path_split[i][path_length - 1] != '/')
			path_concat = _strncat(path_split[i], "/");

		path_concat = _strncat(path_split[i], cmnd);

		if (stat(path_concat, &info) == 0)
			break;

		i++;
	}

	free(path_cpy);

	if (!path_split[i])
	{
		free(path_split);
		return (NULL);
	}

	free(path_split);
	return (path_concat);
}

