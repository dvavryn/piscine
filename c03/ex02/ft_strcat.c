/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:09:12 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/12 13:47:16 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char dest[20] = "Hello, ";
	char src[] = "World!";

	ft_strcat(dest, src);
	printf("%s\n", dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	counter_d;
	int	counter_s;

	counter_d = 0;
	counter_s = 0;
	while (dest[counter_d] != '\0')
		counter_d++;
	while (src[counter_s] != '\0')
	{
		dest[counter_d + counter_s] = src[counter_s];
		counter_s++;
	}
	dest[counter_d + counter_s +1] = '\0';
	return (dest);
}
