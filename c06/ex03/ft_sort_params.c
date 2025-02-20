/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 18:56:45 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/17 18:56:46 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_params(char **arr, int n);
void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	int	i;

	ft_sort_params(argv, argc);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2);

void	ft_sort_params(char **arr, int n)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < n - 1)
	{
		j = 1;
		while (j < n - i)
		{
			if (ft_strcmp(arr[j], arr[j + 1]) > 0)
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] != '\0' && s2[counter] != '\0')
	{
		if (s1[counter] != s2[counter])
			return (s1[counter] - s2[counter]);
		counter++;
	}
	return (s1[counter] - s2[counter]);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
