/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:11:13 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/20 17:09:43 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void	ft_putstr(char *str);

int main (void)
{
    char *c = "Hello World!";
    ft_putstr(c);
}
 */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		write(1, &str[counter], 1);
		counter++;
	}
}
