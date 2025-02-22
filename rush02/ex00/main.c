/*	Prototypes	*/
void	ft_aaa(char *num, char *dict);

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (-1);
	if (argc == 2)
		ft_aaa(argv[1], "numbers.dict");	// if only 1 arg
		// argv[1] = value to convert
	if (argc == 3)
		ft_aaa(argv[2], argv [1]);			// if 2 arg 
		// argv[2] = dict name
		// argv[1] = value to convert
}

void	ft_aaa(char *num, char *dict)
{
}
