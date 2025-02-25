/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 22:45:16 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/24 16:41:40 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_foreach(int *tab, int length, void(*f)(int));
void	ft_putnbr(int nb);
int main(void)
{
	int tab[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 123, 12346};
	ft_foreach(tab, 13, &ft_putnbr);
	return ;
}
void	ft_putnbr(int nb)
{
	char c;

	c = (nb % 10) + '0';
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	write(1, &c, 1);
}

// USAGE: ft_foreach(tab, 1337, &ft_putnbr);
// USAGE: f(int) - instead of ft_putnbr(int)
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i++]);
	}
	return ;
}
