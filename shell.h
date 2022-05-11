#ifndef SHELL_H_
#define SHELL_H_
#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <fcntl.h>
#define TOK_BUFSIZE 64
#define TOK_DELIM " \t\r\n\a"
extern char **environ;

void handle_signal(int signal);
int *_error(char *argv, int count, char *args);
void *_calloc(unsigned int prmNumber, unsigned int prmSize)
int _stat(char **cmd, char **path)

int func_exit(char **args);
void func_printenv(char **env);


#endif
