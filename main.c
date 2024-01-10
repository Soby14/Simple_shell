#include "shell.h"

/**
 * main - Entry point for the shell, the core of the project.
 *
 *Function serves as the entry point for the shell project and is responsible
 * for initializing the shell, reading and processing user commands, and manage
 * the execution of those commands.
 *
 * Return: An integer indicating the exit status of the shell.
 */
int main(void)
{
	char *buff = NULL, **args;
	size_t read_size = 0;
	size_t buff_size = 0;
	int exit_stats = 0;

	while (1)
	{
		if (isatty(0))
			printf("hsh$");
		buff_size = getline(&buff, &read_size, stdin);
		if (buff_size == -1 || _strncmp("exit\n", buff) == 0)
		{
			free(buff);
			break;
		}
		buff[buff_size - 1] = '\0';

		if (_strncmp("env", buff) == 0)
		{
			_environ();
			continue;
		}

		if (empt_line(buff) == 1)
		{
			exit_stats = 0;
			continue;
		}

		args = _slipts(buff, " ");
		args[0] = search_path(args[0]);

		if (args[0] != NULL)
			exit_stats = exec(args);
		else
			perror("Error");
		free(args);
	}
	return (exit_stats);
}
