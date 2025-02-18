/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 22:20:39 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/12 13:34:17 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
void	ft_putstr(char *str);

int	main(void)
{
	char	c[] = "Hello World!";
	char	*pt = c;

	ft_putstr(pt);
}
*/
void	ft_putstr(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		write(1, &str[j], 1);
		j++;
	}
}
