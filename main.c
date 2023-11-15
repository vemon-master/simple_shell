#include "shell.h"
/**
*main - Entry point
*Return: 0
*
*/

int main(void)
{
	char *command = NULL;

	while (1)
	{
		command = PromptAndParse();

		if (strlen(command) > 1)
		{
			ExecuteCommand(command);
		}

		free(command);
	}

	return (0);
}
