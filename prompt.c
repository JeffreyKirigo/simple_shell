#include "shell.h"

int main(void)
{
	char *buffer;
	size_t n = 0;
	
	printf("$ ");
	getline(&buffer, &n, stdin);
	printf("%s \n", buffer);
	return (0);
}
