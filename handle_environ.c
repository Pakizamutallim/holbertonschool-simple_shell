#include "main.h"

/**
 * handle_env - handle the first argv element
 * @buffer: a pointer
 *
 * Return: void
 */
void handle_env(char *buffer)
{
	char **env = environ;

	while (*env != NULL)
	{
		printf("%s\n", *env);
		env++;
	}
	free(buffer);
	exit(EXIT_SUCCESS);
}
