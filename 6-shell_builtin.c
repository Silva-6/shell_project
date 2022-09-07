#include "shell.h"

void env(char **command __attribute__((unused)))
{
	int i = 0;

	while (environ[i])
	{
		print(environ[i++], STDOUT_FILENO);
		print("\n", STDOUT_FILENO);
	}
}

#define SET_OLD(V) (V = _strdup(_getenv("OLDPWD")))
void quit(char **command, data_h *var)
{
	(void) command;
}

void ch_dir(char **command, data_h *var)
{
	char *home;

	home = _getenv("HOME");
	if (command[1] == NULL)
	{
		SET_OLD(var->oldPath);
		if (chdir(home) < 0)
			exit(EXIT_FAILURE);

	}
	if (strcmp(command[1], "-") == 0)
	{
		if (var->oldPath == NULL)
		{
			SET_OLD(var->oldPath);
			if (chdir(var->oldPath) < 0)
				exit(EXIT_FAILURE);
		}
		else
		{

			SETPWD(var->oldPath);
			if (chdir(var->oldPath) < 0)
				exit(EXIT_FAILURE);
		}
	}
	else
	{
		SET_OLD(var->oldPath);
		if (chdir(var->oldPath) < 0)
			exit(EXIT_FAILURE);
	}
}
