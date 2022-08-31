#include "shell.h"

/**
 * shell process
 * 	1. prompt <-----
 * 	2. input       |
 * 	3. parse       |
 * 	4. execute -----
 */

int main (int argc __attribute__((unused)),
		char **argv)
{
	(void) argv;

	signal(SIGINT, ctrl_C);

	while (1)
	{
		print(" $ ", STDOUT_FILENO);
		_getline()
	}

}
