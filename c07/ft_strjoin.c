/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwarz <bschwarz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:21:16 by bschwarz          #+#    #+#             */
/*   Updated: 2025/02/25 10:20:06 by bschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	total_lenght(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += (size - 1) * ft_strlen(sep);
	len++;
	return (len);
}

char	*ft_strcat(int size, char **strs, char *sep, char *dest)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			dest[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j] != '\0')
				dest[k++] = sep[j++];
		}
		i++;
	}
	dest[k++] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;

	if (size == 0)
	{
		dest = (char *)malloc(1);
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	dest = (char *)malloc(total_lenght(size, strs, sep) * sizeof(char));
	dest = ft_strcat(size, strs, sep, dest);
	return (dest);
}

/* #include <stdio.h>

int main (void)
{
	char *strs[] = {"Hello", "world", "this", "is", "a", "test"};
	int size = 6;
	char *sep = " ";
	char *result;

	result = ft_strjoin(size, strs, sep);
	
	printf("%s\n", result);
	free(result);
	return 0;
}
 */