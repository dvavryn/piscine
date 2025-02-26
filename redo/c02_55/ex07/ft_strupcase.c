/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:09:17 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/10 14:09:18 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char string[] = "Hello World! 42";
	
	ft_strupcase(string);
	
	printf("%s", string);
}
 */
char	*ft_strupcase(char *str)
{
	char	count_str;
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		count_str = str[counter];
		if (count_str >= 'a' && count_str <= 'z')
			str[counter] = str[counter] - 32;
		counter++;
	}
	return (str);
}
