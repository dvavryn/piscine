char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char *nbr = "52AF";						//	101001010101111 BIN || 21667 DEC || 51257 OCT
	char *base_from = "0123456789ABCDEF";	//	HEX
	char *base_to = "01";					//	BIN
	char *output;

	output = ft_convertbase(nbr, base_from, base_to);
	printf("%s", output);

	free(output);
	return (0);
}