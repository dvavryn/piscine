#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{

}

int ft_ultimate_range(int **range, int min, int max)
{
	
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