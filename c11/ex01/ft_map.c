/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 22:49:49 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/23 22:49:51 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


//
#include <stdio.h>

int ft_power_two(int nb);
int *ft_map(int *tab, int length, int (*f)(int));

int main(void)
{
	int tab[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
	int i = 0;
	while (i < 13)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	int *map = ft_map(tab, 13, &ft_power_two);
	i = 0;
	while (i < 13)
	{
		printf("%d ", map[i]);
		i++;
	}
	free(map);
}

int	ft_power_two(int nb)
{
	int result;

	result = nb * nb;
	return (result);
}


//
int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *map;
	int i;

	map = (int *)malloc((length + 1) * sizeof(int));
	i = 0;
	while (i < length)
	{
		map[i] = f(tab[i]);
		i++;
	}
	map[i] = 0;
	return (map);
}
