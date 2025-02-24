/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:52:55 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/20 13:52:56 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_total_len(int size, char **strs, char *sep);
int		ft_str_len(char *str);
char	*ft_concat(int size, char **strs, char *sep, char *dest);

/*
#include <stdio.h>
char	*ft_strjoin(int size, char **strs, char *sep);

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
} */

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	char	*new_str;

	if (size == 0)
	{
		new_str = (char *)malloc(1);
		if (new_str)
			new_str[0] = '\0';
		return (new_str);
	}
	total_len = ft_total_len(size, strs, sep);
	new_str = (char *)malloc(total_len + 1);
	return (ft_concat(size, strs, sep, new_str));
}

int	ft_total_len(int size, char **strs, char *sep)
{ft_total_len(int size, char **s
	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_str_len(strs[i]);
		i++;
	}
	len += ft_str_len(sep) * (size - 1);
	return (len);
}

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_concat(int size, char **strs, char *sep, char *dest)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			dest[k++] = strs[i][j++];
		if (i < size -1)
		{
			j = 0;
			while (sep[j])
				dest[k++] = sep[j++];
		}
		i++;
	}
	dest[k++] = '\0';
	return (dest);
}
