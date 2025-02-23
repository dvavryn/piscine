# include <stdlib.h>
# include <unistd.h>

typedef struct s_stock_str
{
	int		size;	// str_len *str
	char	*str;	// *str
	char	*copy;	// stcpy *str
}	t_stock_str;

void	ft_show_tab(struct s_stock_str *par);
void	ft_putstr(char *str);
void	ft_putnum(int num);
void	free_buff(t_stock_str *buff, int i);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int main (void)
{
	char *hello[5] =
	{
		"Hello",
		"world",
		"here",
		"i",
		"am"
	};
	t_stock_str *vollgas = ft_strs_to_tab(5, hello);
	ft_show_tab(vollgas);
	ft_putstr("\n\nGESCHAFFT!!!!");
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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].size != 0
		&& par[i].str != NULL
		&& par[i].copy != NULL)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnum(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++;
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnum(int num)
{
	char	c;

	c = (num % 10) + '0';
	if (num == -214783648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (num < 0)
	{
		write(1, "-", 1);
	}
	if (num >= 10)
	{
		ft_putnum(num / 10);
	}
	write(1, &c, 1);
}
