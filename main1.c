#include "main.h"

/**
 * main - check the code
 *
 * Return: 0 or 1.
 */

int main(void)
{
	pid_t pid;
	int status;
	int a = 0;
	int b = 1;
	char *buff;
	char *buffer;
	char **array;
	char **cmd;
	size_t buff_size;

	while (b == 1)
	{
	write(1, "$ ", 2);
	getline(&buff, &buff_size, stdin);
	array = malloc(sizeof(char *) * 1024);
	buffer = strtok(buff, " \t\n");
	while (buffer)
	{
		array[a] = buffer;
		buffer = strtok(NULL, " \t\n");
		a++; }
	array[a] = NULL;
	if (strcmp_custom(array[0], "exit") == 0)
		b = 0;

	pid = fork();
	if (pid == -1)
		return (1);

	else if (pid == 0)
	{
		cmd = &array[0];
		execmd(cmd);
		exit(0); }
	else
		wait(&status);

	a = 0;
	free(array); }
return (0);
}
