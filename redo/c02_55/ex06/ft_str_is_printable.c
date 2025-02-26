/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:09:01 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/10 14:09:03 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
	char string[] = "abs!QAAQ@";
	int ret = ft_str_is_printable(string);

	if (ret == 0)
		printf("-- not printable\n-- Return 0");
	else if (ret == 1)
	{
		printf("%s\n", string);
		printf("++ printable\n++ Return 1\n");
	}
}
 */
int	ft_str_is_printable(char *str)
{
	int	counter;
	int	str_count;

	counter = 0;
	while (str[counter] != '\0')
	{
		str_count = str[counter];
		if (str_count >= 32 && str_count <= 126)
			counter++;
		else
			return (0);
	}
	return (1);
}
