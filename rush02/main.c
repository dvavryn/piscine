void	ft_putstr(char *str);

int main(int argc, char **argv)
{
	if (argc == 1)
		return )0);
	if (argc == 2)
		return (1);
	if (argc == 3)
		return (2);
	if (argc > 3)
		return (-1)
}

int arg_check(int argc)
{
	if (argc == 1)
	{
		ft_putstr("Custom dictionary!");
		ft_putstr("Usage: ./filename \"*.dict\" \"value\"");
		ft_putstr("Standard dictionary!");
		ft_putsrt("       ./filename \"value\"");
	}
}


void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}