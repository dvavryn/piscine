/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:11:50 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/17 15:12:08 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb);

int main (int argc, char **argv)
{
	if (argc != 2)
		return (0);	
	printf("%i", ft_sqrt(atoi(argv[1])));
}
 */
int	ft_sqrt(int nb)
{
	double	d;
	double	epsilon;

	if (nb < 0)
		return (-1);
	if (nb == 0)
		return (0);
	d = (double) nb;
	epsilon = 0.00001;
	while ((d * d - nb) > epsilon || (nb - d * d) > epsilon)
	{
		d = 0.5 * (d + nb / d);
	}
	if ((int) d * (int) d != nb)
		return (0);
	return ((int) d);
}
