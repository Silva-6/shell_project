#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>

void ctrl_C(int);

int print(char *, int);

int _strlen(char *);

#endif /* SHELL_H */
