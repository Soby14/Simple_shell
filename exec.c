#include "shell."

/**
 * exec - Execute a command from a specified path in a child process.
 *
 * @args: An array of  arguments for the command.
 *
 * Return: The exist status of execute command.
 */

int exec(char **args)
{
	int id = fork(), stats;

	if (id == 0)
	{
		if (exec(args[0], args, environ) == -1)
			perror("Error");
	}
	else
	{
		wait(&stats);
		if (WIFEXITED(stats))
			stats == WEXITSTATS(stats);
	}

	return (stats);
}


