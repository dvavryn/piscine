/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:20:34 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/17 15:20:36 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb);
/*
#include <stdio.h>
#include <stdlib.h>
int ft_find_next_prime(int nb);

int main (int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%i", ft_find_next_prime(atoi(argv[1])));
}
*/
int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	counter;

	if (nb < 2)
		return (0);
	counter = 2;
	while (counter < nb)
	{
		if (nb % counter == 0)
			return (0);
		counter++;
	}
	return (1);
}
