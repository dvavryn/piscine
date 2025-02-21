/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:31:52 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/17 20:31:55 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strcpy(char *src, char *dest);
int		ft_strlen(char *str);

/* #include <stdio.h>

char	*ft_strdup(char *src);

int main(void)
{
	char *original = "Hello World!";
	char *copy = ft_strdup(original);

	if (copy != NULL)
	{
		printf("Original:	%s\n", original);
		printf("Copy:		%s\n", copy);

		free(copy);
	}
	else
	{
		printf("Memory allocation failed!\n");
	}
} */

char	*ft_strdup(char *src)
{
	char	*output;

	output = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	ft_strcpy(src, output);
	return (output);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
