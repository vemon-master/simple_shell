#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <inttypes.h>
#include <sys/stat.h>
#include <stdbool.h>

#define MAX_ARGS 10

void ExecuteCommand(char *command);

char *PromptAndParse(void);
void _printstring(char *str);

#endif
