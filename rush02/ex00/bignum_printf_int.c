#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str);

int main (int argc, char **argv)
{
	char *nbr = (char *)malloc(3 * sizeof(char));
	int x = 0;
	int len = ft_strlen(argv[1]);
	if (len % 3 == 0)
	{	
		int j;
		int i = 0;
		while (i < len)
		{
			j = 0;
			while (j < 3)
			{
				nbr[j] = argv[1][i + j];
				j++;
			}
			if (j == 3)
			{
				x = atoi(nbr);
				printf("%i.", x);
			}
			i += 3;
		}
	}
	free(nbr);
}

int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}
