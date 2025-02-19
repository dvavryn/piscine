/*#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int i[] = {5, 2, 4, 9, 11, 3, 25, 99, 87};
	int j = 0;
	
	ft_sort_int_tab(i, 9);
	while (j < 9)
	{
		printf("%i ", i[j]);
		j++;
	}
}
*/
int		ft_cmp(int tab1, int tab2);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (ft_cmp(tab[j], tab[j + 1]) > 0)
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	ft_cmp(int tab1, int tab2)
{
	if (tab1 > tab2)
		return (1);
	return (0);
}
