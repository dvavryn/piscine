/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:03:48 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/12 13:47:31 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

/* int	main(void)
{
	char	*str = "Hallo, das ist ein Teststring";
	char	*find[] = {
		"Test",								// normal case
		"Hallo",							// at the beginning
		"ring",								// at the end
		"nicht",							// not there
		"",									// empty
		"hellothatisanstringthatislonger"	// longer than haystack
	};

	for (int i = 0; i < 6; i++)
	{
		char *result_ft = ft_strstr(str, find[i]);
		char *result_lib = strstr(str, find[i]);

		printf("Search for \"%s\":\n", find[i]);
		printf("  ft_strstr: %s\n", result_ft ? result_ft : "NULL");
		printf("  strstr   : %s\n", result_lib ? result_lib : "NULL");
		printf("\n");
	}
} */

char	*ft_strstr(char *str, char *to_find)
{
	int	c1;
	int	c2;

	c1 = 0;
	c2 = 0;
	if (to_find[c2] == '\0')
	{
		return (&str[c1]);
	}
	while (str[c1] != '\0')
	{
		c2 = 0;
		while (str[c1 + c2] == to_find[c2] && to_find[c2] != '\0')
		{
			c2++;
		}
		if (to_find[c2] == '\0')
		{
			return (&str[c1]);
		}
		c1++;
	}
	return (NULL);
}
