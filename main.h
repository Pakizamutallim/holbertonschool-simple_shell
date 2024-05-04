#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>
extern char **environ;


char **line_devider(char *buffer, char **arr);
void execute_command(char *buffer, char **argv);
void handle_path(char *buffer, char **argv);
char *get_input(void);
int path_handler(char *buffer);
void handle_env(char *buffer);

#endif
