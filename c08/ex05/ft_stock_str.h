#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stock_str
{
	int		size;	// str_len *str
	char	*str;	// *str
	char	*copy;	// stcpy *str
}	t_stock_str;

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

#endif