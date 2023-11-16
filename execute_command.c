#include "shell.h"
/**
 * ExecuteCommand - Executes a command with arguments
 * @command: The command to execute
 */
void ExecuteCommand(char *command)
{
char *token;
char *args[MAX_ARGS];
int argCount = 0;
pid_t pid;
token = strtok(command, " ");
while (token != NULL && argCount < MAX_ARGS)
{
args[argCount] = token;
token = strtok(NULL, " ");
argCount++;
}
args[argCount] = NULL;
pid = fork();
if (pid == -1)
{
perror("fork");
exit(EXIT_FAILURE);
}
else if (pid == 0)
{
if (execvp(args[0], args) == -1)
{
fprintf(stderr, "%s: No such file or directory\n", args[0]);
exit(EXIT_FAILURE);
}
}
else
{
wait(NULL);
}
}
