#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

extern char **environ;



/*Custom Functions*/
char* getenv_custom(const char* name);
char* strchr_custom(const char* str, int character);
int strcmp_custom(const char* str1, const char* str2);
char* strncpy_custom(char* destination, const char* source, size_t num);
char* strdup_custom(const char* str);
size_t strlen_custom(const char* str);
char* strcpy_custom(char* destination, const char* source);
char* strcat_custom(char* destination, const char* source);

/*get a location of our command*/
char *get_location(char *command);
void execmd(char **argv);
void printEnvironment();


#endif
