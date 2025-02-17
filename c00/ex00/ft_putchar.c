/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:22:03 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/06 10:39:20 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
void	ft_putchar(char c);

int	main(void)
{
	ft_putchar('g');
	return (0);
}
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
