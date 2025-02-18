/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:06:15 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/06 12:24:45 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
void ft_is_negative(int n);

int main(void)
{
	ft_is_negative(-3);
	return (0);
}
*/
void	ft_is_negative(int n)
{
	char	p_or_n;

	if (n < 0)
	{
		p_or_n = 'N';
		write(1, &p_or_n, 1);
	}
	else
	{
		p_or_n = 'P';
		write(1, &p_or_n, 1);
	}
}
