#include "main.h"



/**
 * handle_path - a function that handlerv path
 * @buffer: a pointer
 * @argv: argument
 *
 * Return: array
 */

void handle_path(char *buffer, char **argv)
{
	char *path = getenv("PATH");
	char *token;

	if (path == NULL)
	{
		fprintf(stderr, "./hsh: 1: %s: not found\n", argv[0]);
		free(buffer);
		exit(127);
	}
	token = strtok(path, ":");
	while (token != NULL)
	{
		char error_message[CHAR_BUFFER];

		snprintf(error_message, sizeof(error_message), "%s/%s", token, argv[0]);
		if (access(error_message, X_OK) == 0)
		{
			execute_command(error_message, argv);
		}
		token = strtok(NULL, ":");
	}
}
