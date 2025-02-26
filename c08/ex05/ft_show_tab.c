/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 18:09:17 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/26 16:17:52 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str);
void	ft_putnum(int num);

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].size != 0
		&& par[i].str != NULL
		&& par[i].copy != NULL)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnum(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++;
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnum(int num)
{
	char	c;

	c = (num % 10) + '0';
	if (num == -214783648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (num < 0)
	{
		write(1, "-", 1);
	}
	if (num >= 10)
	{
		ft_putnum(num / 10);
	}
	write(1, &c, 1);
}
