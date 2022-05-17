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
int _stat(char **cmd, char **path);
void prompt(void);
void *_calloc(unsigned int prmNumber, unsigned int prmSize);
int func_exit(char **args);
void func_printenv(char **env);
int child_process(char **av, char **args, char **environ, int st, int countt);

char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _strlen(const char *s);
int _strcmp(char *s1, char *s2);
char *_strstr(char *str1, char *str2);
char *_strdup(char *str);
char *_itoa(int num, int base);

char *read_input(void);
char **sparse_str(char *line, char **env);
int execute(char **args, char **argv, int count, char *line, char **env);
void prompt(void);
char *read_input(void);
char **sparse_str(char *line, char **env);
int execute(char **args, char **argv, int count, char *line, char **env);
void prompt(void);

void *_realloc(void *ptr, unsigned int new_size);
int _count_point(char *buffer);
void *_calloc(unsigned int nmemb, unsigned int size);
char **search_path(char **environ);
int _stat(char **cmd, char **path);
char *str_concat(char *s1, char *s2);
void _puts(char *str);
int _putchar(char c);

/*update*/


#endif
