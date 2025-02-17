/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:11:27 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/12 13:48:35 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int ft_atoi(char *str);

int main(void)
{
	int i = ft_atoi("   ---+--+1234av567");
	printf("\noutput: %i", i);
}
 */
int	ft_atoi(char *str)
{
	int	output;
	int	counter;
	int	pos_or_neg;

	output = 0;
	counter = 0;
	pos_or_neg = 1;
	while (str[counter] == ' ')
		counter++;
	while (str[counter] == '+' || str[counter] == '-')
	{
		if (str[counter] == '-')
			pos_or_neg *= -1;
		counter++;
	}
	while (str[counter] >= '0' && str[counter] <= '9')
	{
		output = output * 10 + (str[counter] - '0');
		counter++;
	}
	return (output * pos_or_neg);
}
