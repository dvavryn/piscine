/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:12:40 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/17 12:29:37 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int ft_iterative_factorial(int nb);

int main (void)
{
	int result = ft_iterative_factorial(7);
	printf("%i", result);
}
*/
int	ft_iterative_factorial(int nb)
{
	int	counter;

	if (nb < 1)
		return (0);
	counter = nb;
	while (counter > 1)
	{
		nb *= counter - 1;
		counter--;
	}
	return (nb);
}
