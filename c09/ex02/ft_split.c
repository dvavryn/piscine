#include <stdlib.h>


/*ILLEGAL!!!!!*/
#include <stdio.h>
char **ft_split(char *str, char *charset);
int main(void)
{
	char *str = "Hello ...World ...Here ...I ...AM";
	char *sep = "...";
	char **two_d_array;
	int i = 0;
	two_d_array = ft_split(str, sep);
	while (two_d_array)
	{
		printf("%s", two_d_array[i]);
	}
	free(two_d_array);
	return ;
}
/*ILLEGAL END!!!!*/

char **ft_split(char *str, char *charset)
{
	char	**buffer;
	buffer = (char **)malloc(ft_strlen(str) * sizeof(char));
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}