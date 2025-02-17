/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:14:20 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/17 15:14:23 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int ft_is_prime(int nb);

int main (void)
{
	printf("%i", ft_is_prime(4561));
}
 */
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
