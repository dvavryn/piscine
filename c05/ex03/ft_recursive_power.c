/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 13:08:36 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/17 13:17:59 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main (void)
{
	printf("%i", ft_recursive_power(3, 6));
}
*/
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
		nb *= ft_recursive_power(nb, power - 1);
	else
		return (1);
	return (nb);
}
