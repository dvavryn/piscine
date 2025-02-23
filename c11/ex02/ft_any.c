#include <stdlib.h>
#include <stdio.h>

int ft_any(char **tab, int (*f)(char*));
int ft_cmp_hello(char *str);

int main(void)
{
	char *tab[9] = {"Hello",
				"Hello", 
				"Hello", 
				"Hello", 
				"Hello", 
				"Hello", 
				"Hello", 
				"Hello",};
	tab[8] = NULL;
	printf("%d", ft_any(tab, ft_cmp_hello));
}

int ft_cmp_hello(char *str)
{
	int i;
	char *hello = "Hello";

	i = 0;
	while (str[i] != '\0')
	{
		if (hello[i] != str[i])
			return (1);
		i++;
	}
	return (0);
}

int ft_any(char **tab, int (*f)(char *))
{
	int i;
	int ret;

	i = 0;
	ret = 0;
	while (*tab)
	{
		if (tab[i] == NULL)
		ret = f(tab[i]);
		if (ret == 1)
			return (1);
		i++;
	}
	return (0);
}