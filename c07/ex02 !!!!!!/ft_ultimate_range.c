#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);
void ft_write_array(int min, int max, int *array);
int *ft_range(int min, int max);

int main(void)
{
	int *range = NULL;
	printf("Size of ft_ultimate_range: %i", ft_ultimate_range(&range, 1, 20));
}

int ft_ultimate_range(int **range, int min, int max)
{
	int size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (!range)
		return (-1);
;	size = sizeof(range) / sizeof(int);
	return (size);
}

int *ft_range(int min, int max)
{
	int *buf;

	if (min >= max)
		return (NULL);
	buf = malloc((max - min) * sizeof(int));
	ft_write_array(min, max, buf);
	return (buf);
}

void ft_write_array(int min, int max, int *arr)
{
	int	i;

	i = 0;
	while (i < (max - min))
	{
		arr[i] = min + i;
		i++;
	}
}