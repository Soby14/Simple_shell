#ifndef SHELL_H
#define SHELL_H

/*LIBRARIES*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>

/*PROTOTYPES*/
int _strnlen(char *s);
int exec(char **args);
char *_strncpy(char *dest, char *src);
void _environ(void);
char *_strncat(char *dest, char *src);
int _strncmp(char *s1, char *s2);
char *search_path(char *cmnd);
char *_getenviron(char *env_var);
int empt_line(char *buff);
void *_calloc(unsigned int nmember, unsigned int size);
char **_splits(char *strn, char *sep);

/*GLOBAL VAR*/
extern char **environ;

#endif

