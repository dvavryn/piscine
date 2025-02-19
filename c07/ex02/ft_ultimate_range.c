#include <stdlib.h>

void	ft_write_array(int min, int max, int **arr);
/* 
int	ft_ultimate_range(int **range, int min, int max);
#include <stdio.h>
int	main(void)
{
	int *range;
	int min = 1;
	int max  = 21;
	int size;
	int i;

	size = ft_ultimate_range(&range, min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%i ", range[i]);
		i++;
	}
	printf("\nSize of Array is %i\n", size);
	free(range);
}
 */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc((max - min) * sizeof(int));
	if (!arr)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (i);
}
