#include "shell.h"

int print(char *var, int fd)
{
	return (write(fd, var, _strlen(var)));
}
