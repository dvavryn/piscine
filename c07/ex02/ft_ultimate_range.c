/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:52:02 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/20 13:52:04 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
