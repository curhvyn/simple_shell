#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *buffer;
	size_t bufsize = 10;
	int characters;

	buffer = malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		exit(98);
		return (-1);
	}

	printf("$ ");
	characters = getline(&buffer, &bufsize, stdin);
	if (characters < 0)
	{
		free(buffer);
		exit(99);
		return (-1);
	}

	printf("%s", buffer);
	return (0);
}
