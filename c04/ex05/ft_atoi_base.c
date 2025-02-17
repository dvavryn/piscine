int	ft_atoi_base(char *str, char *base);
int	ft_check_rules(int radix, char *base);
int	ft_check_radix(char *base);

int	main (void)
{
	int	i;

	i = ft_atoi_base("100101101011", "01");
	// 2411
}

int	ft_atoi_base(char *str, char*base)
{
	int	radix;
	int check;

	radix = ft_check_radix(base);
	check = ft_check_rules(radix, base);
	if (check == 0)
		return (0);
}

// check if rules are okay (if rules dont apply return 0) (else return 1)
int	ft_check_rules(int radix, char *base)
{
	int	counter_1;
	int	counter_2;

	counter_1 = 0;
	counter_2 = 0;
	if (radix == 0 || radix == 1)
		return (0);
	while (base[counter_1] != '\0')
	{
		counter_2 = 0;
		if (base[counter_1] == '-' || base[counter_1 == '+']
			|| base[counter_1] == ' ' || base[counter_1] == '\n'
			|| base[counter_1] == '\t' || base[counter_1 == '\v'])
			return (0);
		while (base[counter_2] != '\0')
		{
			if (base[counter_1] == base[counter_2]
				&& counter_1 != counter_2)
				return (0);
			counter_2++;
		}
		counter_1++;
	}
	return (1);
}

int	ft_check_radix(char *base)
{
	int	counter_1;

	counter_1 = 0;
	while (*base)
	{
		counter_1++;
		base++;
	}
	if (counter_1 <= 1)
		return (0);
	else
		return (counter_1);
}
