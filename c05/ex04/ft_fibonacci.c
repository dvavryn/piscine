/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:48:52 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/17 14:50:21 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdlib.h>
#include <stdio.h>

int ft_fibonacci(int index);

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Wrong input");
		return 0;
	}
	int i = atoi(argv[1]);
	printf("%i", ft_fibonacci(i));
}
*/
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
