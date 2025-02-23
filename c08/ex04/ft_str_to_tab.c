/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:19:47 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/23 17:19:48 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <unistd.h>


typedef struct s_stock_str
{
	int		size;
	char 	*str;
	char	*copy;
}	t_stock_str;


void	free_buff(t_stock_str *buff, int i);
int	ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*buff;
	int			i;

	buff = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!buff)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		buff[i].size = ft_strlen(av[i]);
		buff[i].str = ft_strdup(av[i]);
		buff[i].copy = ft_strdup(buff[i].str);
		if (!buff[i].str || !buff[i].copy)
		{
			free_buff(buff, i);
			return (NULL);
		}
		i++;
	}
	buff[i].size = 0;
	buff[i].str = NULL;
	buff[i].copy = NULL;
	return (buff);
}

void	free_buff(t_stock_str *buff, int i)
{
	while (i >= 0)
	{
		free(buff[i].str);
		free(buff[i].copy);
		i--;
	}
	free(buff);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*output;

	output = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!output)
		return (NULL);
	ft_strcpy(output, src);
	return (output);
}

