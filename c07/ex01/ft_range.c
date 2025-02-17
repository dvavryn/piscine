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

/* 
	Create a function ft_range which returns an array of ints. This
	int array should contain all values between min and max.

	Min included - max excluded.

	Here is how it should be prototyped:
		int 	*ft_range(int min, int max);

	If min's value is greater or equal to max's value, a null pointer
	should be returned.
 */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int main(void)
{
	int *i = ftrange(1, 20);
	int j = 0;

	while (j < sizeof(i)/sizeof(int))
	{
		printf("%i",i[j]);
		j++;
	}	
}

int	*ft_range(int min, int max)
{
	if (min >= max)
		return (NULL);
	
}