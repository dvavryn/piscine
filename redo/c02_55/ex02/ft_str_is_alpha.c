/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:06:17 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/10 14:07:14 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	char string[] = "abcd";
	int ret = ft_str_is_alpha(string);

	printf("%s\n", string);
	if (ret == 0)
		printf("-- not alphabetical\n-- Return 0");
	else if (ret == 1)
		printf("++ alphabetical\n++ Return 1\n");
}
*/
int	ft_str_is_alpha(char *str)
{
	int	counter;
	int	str_count;

	counter = 0;
	while (str[counter] != '\0')
	{
		str_count = str[counter];
		if ((str_count >= 'a' && str_count <= 'z')
			|| (str_count >= 'A' && str_count <= 'Z'))
			counter ++;
		else
			return (0);
	}
	return (1);
}
