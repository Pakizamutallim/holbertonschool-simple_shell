#include "main.h"

/**
 * execute_command - execute the path
 * @buffer: it is a buffer
 * @argv: arguments
 *
 * Return: void
 */
void execute_command(char *buffer, char **argv)
{
	if (execve(buffer, argv, environ) == -1)
	{
		perror("execve");
		free(buffer);
		exit(EXIT_FAILURE);
	}
}
