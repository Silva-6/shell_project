#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>

/* initial size of buffer for user input */
#define READ_BUF 1000


/* shell utility functions */
void ctrl_C(int);
char *_getline(void);

int print(char *, int);

int _strlen(char *);

/* shell string functions */
int _strlen(char *);
int _strcmp(char*, char *);

/* shell memory management */
void *_realloc(void *, int, int); 

#endif /* SHELL_H */
