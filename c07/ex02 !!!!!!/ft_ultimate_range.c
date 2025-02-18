#include <stdlib.h>

int	ft_ultimate_range(int **range, int main, int max);

int main (void)
{
	int min = 1;
	int max = 20;
	int *ar = NULL;
	int **arr = *ar;
	int size = ft_ultimate_range(arr, min, max);

	if (!arr)
		return 1;
	int i = 0;
	while (i < (max - min))
	{
		printf("%i", arr[i]);
		i++;
	}
	free(arr);
}

void	ft_write_array(int min, int max, int **arr);

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min > max)
	{
		range = NULL;
		return (0);
	}
	range = malloc((max - min) * sizeof(int));
	ft_write_array(min, max, *range);

	if (!range)
		return (-1);
	return (sizeof(range));
}

void	ft_write_array(int min, int max, int **arr)
{
	int	i;

	i = 0;
	while (i < (max - min))
	{
		*arr[i] = min + i;
		i++;
	}
}