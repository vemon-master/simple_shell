#include "shell.h"
/**
*PromptAndParse - prompts to enter command and parses
*Return: void
*
*/
#define MAX_ARGS 10

char *PromptAndParse(void)
{
char *Input = NULL;
size_t InputSizeInBytes;
ssize_t CharsRead;

_printstring("$ ");
CharsRead = getline(&Input, &InputSizeInBytes, stdin);

if (CharsRead < 0)
{
free(Input);
exit(0);
}
if (strcmp(Input, "exit\n") == 0)
{
free(Input);
exit(0);
}
Input[strcspn(Input, "\n")] = '\0';
return Input;
}
