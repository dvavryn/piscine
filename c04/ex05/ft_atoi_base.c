/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:48:59 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/20 13:49:00 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_radix(char *base);
int	find_in_base(char c, char *base);
int	ft_power(int nbr, int pwr);

/* #include <stdio.h>
int ft_atoi_base(char *nbr, char *base);
int main (void)
{
	char *nbr = "1001001001001";
	char *base = "01";
	int i = ft_atoi_base(nbr, base);
	printf("%s in base %i is %i in base 10.\n", nbr, get_radix(base), i);
}
 */
int	ft_atoi_base(char *nbr, char *base)
{
	int	radix;
	int	len;
	int	i;
	int	result;

	radix = get_radix(base);
	len = get_radix(nbr);
	result = 0;
	i = 0;
	while (nbr[i] != '\0')
	{
		result += find_in_base(nbr[i], base) * ft_power(radix, len - i - 1);
		i++;
	}
	return (result);
}

int	get_radix(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	find_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		if (c == base[i++])
			return (i - 1);
	return (0);
}

int	ft_power(int nbr, int pwr)
{
	int	result;

	result = 1;
	while (pwr > 0)
	{
		result *= nbr;
		pwr--;
	}
	return (result);
}
