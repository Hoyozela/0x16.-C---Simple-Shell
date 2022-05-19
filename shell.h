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

char *_itoa(int num, int base);
char *_strdup(char *str);
int _strlen(const char *s);
void _puts(char *str);
int _putchar(char c);
char *str_concat(char *s1, char *s2);
int _strcmp(char *s1, char *s2);
void handle_signal(int signal);
int *_error(char *argv, int count, char *args);
int _stat(char **cmd, char **path);
void func_printenv(char **environ);
int main(int ac __attribute__((unused)), char **av, char **env);
char *read_input(void);
char **sparse_str(char *line, char **env);
void prompt(void);
void *_calloc(unsigned int prmNumber, unsigned int prmSize);
char **_which(char *foundpath);
int child_process(char **av, char **args, char **env, int status_main, int cnt);
char **search_path(char **environ);

#endif
