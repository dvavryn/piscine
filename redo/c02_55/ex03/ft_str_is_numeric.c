/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:07:42 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/10 14:07:44 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
	char string[] = "/0123456789:";
	int ret = ft_str_is_numeric(string);

	printf("%s\n", string);
	if (ret == 0)
		printf("-- not numeric\n-- Return 0");
	else if (ret == 1)
		printf("++ numeric\n++ Return 1\n");
}
 */
int	ft_str_is_numeric(char *str)
{
	int	counter;
	int	str_count;

	counter = 0;
	while (str[counter] != '\0')
	{
		str_count = str[counter];
		if (str_count >= '0' && str_count <= '9')
			counter++;
		else
			return (0);
	}
	return (1);
}
