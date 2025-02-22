#include <stdio.h>

int ft_strlen(char *str);
void printnum(int len);

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		return -1;
	}
	else
	{
		int len;
		len = ft_strlen(argv[1]);
		if (len % 3 == 1)
		{
			printnum(len);
			printf("\n");
		}
	}
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return i;
}

void printnum(int len)
{
	switch (len)
	{
		case 4:
			printf("thousand");
			break;
		case 7:
			printf("million");
			break;
		case 10:
			printf("billion");
			break;
		case 13:
			printf("trillion");
			break;
		case 16:
			printf("quadrillion");
			break;
		case 19:
			printf("quintillion");
			break;
		case 22:
			printf("sextillion");
			break;
		case 25:
			printf("septillion");
			break;
		case 28:
			printf("octillion");
			break;
		case 31:
			printf("nonillion");
			break;
		case 34:
			printf("decillion");
			break;
		case 37:
			printf("undecillion");
			break;
	}	
}
