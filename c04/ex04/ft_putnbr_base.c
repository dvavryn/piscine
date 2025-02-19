/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:10:47 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/12 18:10:50 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_radix(char *radix);
void	ft_putchar(char c);
void	ft_put_radix_char(int pos, char *radix);
int		ft_check_rules(int radix, char *base);

// Main to test ft_putnbr_base.c just uncomment to test
/* void	ft_putnbr_base(int nbr, char *base);
#include <stdio.h>

int	main(void)
{
	int i = 21355;

	printf("input i: \"%i\"",i);
  //ft_putnbr_base(nbr, *base)
	printf("\n\nbase 10-----\n");
	ft_putnbr_base(i, "0123456789");    		// base 10
	printf("\n\nbase 2-----\n");
	ft_putnbr_base(i, "01");   		   			// base  2
	printf("\n\nbase 16-----\n");
	ft_putnbr_base(i, "0123456789ABCDEF"); 		// base 16
	printf("\n\nbase 8-----\n");
	ft_putnbr_base(i, "01234567");       		// base  8
	printf("   or   ");
	char *oct = "abcdefgh";
	ft_putnbr_base(i, oct);						// base  8
	printf("\n0-%c, 1-%c, 2-%c, 3-%c", oct[0], oct[1], oct[2], oct[3]);
	printf("\n4-%c, 5-%c, 6-%c, 7-%c\n", oct[4], oct[5], oct[6], oct[7]);
	printf("\n\nbase empty-----\n");
	ft_putnbr_base(i, "");						// base empty
	printf("\n\nbase 1-----\n");
	ft_putnbr_base(i, "1");
} */

void	ft_putnbr_base(int nbr, char *base)
{
	int	radix;
	int	check;

	radix = ft_check_radix(base);
	check = ft_check_rules(radix, base);
	if (check == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr >= radix)
		ft_putnbr_base(nbr / radix, base);
	ft_put_radix_char(nbr % radix, base);
}

int	ft_check_radix(char *base)
{
	int	counter_1;

	counter_1 = 0;
	while (*base)
	{
		counter_1++;
		base++;
	}
	if (counter_1 <= 1)
		return (0);
	else
		return (counter_1);
}

void	ft_put_radix_char(int pos, char *radix)
{
	int	counter;

	counter = 0;
	while (counter < pos)
		counter++;
	write(1, &radix[counter], 1);
}

int	ft_check_rules(int radix, char *base)
{
	int	counter_1;
	int	counter_2;

	counter_1 = 0;
	counter_2 = 0;
	if (radix == 0 || radix == 1)
		return (0);
	while (base[counter_1] != '\0')
	{
		counter_2 = 0;
		if (base[counter_1] == '-' || base[counter_1] == '+')
			return (0);
		while (base[counter_2] != '\0')
		{
			if (base[counter_1] == base[counter_2]
				&& counter_1 != counter_2)
				return (0);
			counter_2++;
		}
		counter_1++;
	}
	return (1);
}
