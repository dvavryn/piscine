/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:32:34 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/17 20:32:37 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_write_array(int min, int max, int *arr);

/*
#include <stdio.h>
int	*ft_range(int min, int max);

int main(void)
{

	int min = 1;
	int max = 20;
	int *arr = ft_range(min, max);

	if (!arr)
	{
		return 1;
	}
	int j = 0;
	while (j < (max - min))
	{
		printf("%i ", arr[j]);
		j++;
	}
	free(arr);
}
*/
int	*ft_range(int min, int max)
{
	int	*buf;

	if (min >= max)
		return (NULL);
	buf = malloc((max - min) * sizeof(int));
	ft_write_array(min, max, buf);
	return (buf);
}

void	ft_write_array(int min, int max, int *arr)
{
	int	i;

	i = 0;
	while (i < (max - min))
	{
		arr[i] = min + i;
		i++;
	}
}
