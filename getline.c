#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char *line;
	size_t buffer = 32;

	line = malloc(buffer * sizeof(char));
	if (line == NULL)
	{
		perror("fuck the shit\n");
		return (0);
	}
	getline(&line, &buffer, stdin);
	printf("%s", line);
	free(line);

	return (0);
}
