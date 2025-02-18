/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:09:23 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/12 13:47:25 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main (void)
{
	char dest[40] = "Hello, ";
	char src[] = "World! Here I am!";
	unsigned int nb = 8;

	ft_strncat(dest, src, nb);
	printf("%s\n", dest);
} */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				counter_d;
	unsigned int	counter_s;

	counter_d = 0;
	counter_s = 0;
	while (dest[counter_d] != '\0')
		counter_d++;
	while (src[counter_s] != '\0' && counter_s < nb)
	{
		dest[counter_d + counter_s] = src[counter_s];
		counter_s++;
	}
	return (dest);
}
