#include <stdlib.h>
#include <stdio.h>


/**
 * _strtok - get string and put them in array
 * @addr: the address of string
 *
 * Return: the address of the array
 */

int _strtok(char *addr)
{
	int i = 0;
	int j = 0;
	int c = 0;

	printf("now in the counter... initializing...\n");
	while(addr[i] != '\0')
	{
		if (addr[i] == ' ' && addr[i + 1] !=  ' ')
			j++;
		i++;
	}
	j += 2;
	i = 0;
	while (addr[i] != '\0')
	{
		if (addr[i] != ' ')
			c++;
		i++;
	}

	return (c + j);
}


int main(void)
{
        char *line;
        size_t buffer = 32;
	int i = 0;

        line = malloc(buffer * sizeof(char));
        if (line == NULL)
        {
                perror("fuck the shit\n");
                return (0);
        }
        getline(&line, &buffer, stdin);
        printf("%s - passing this to strtok\n", line);
	i = _strtok(line);
	printf("%d\n", i);
        free(line);

        return (0);
}
