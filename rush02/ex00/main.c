int main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr("Custom dictionary!");
		ft_putstr("Usage: ./filename \"*.dict\" \"value\"");
		ft_putstr("Standard dictionary!");
		ft_putsrt("       ./filename \"value\"");
	}
	if (argc == 2)
	{

	}	
	if (argc == 3)
	{
		
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}