/* 
	Write a function that will concatenate all the strings pointed
	by strs separated by sep.
	
	size is the number of strings in strs

	if size is 0, you must return an empty string that you can free().

	Here is how it should be prototyped:
			char *ft_strjoin(int size, char **strs, char *sep);


 */
#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);
int	ft_total_strlen(int size, char **strs);

int	main(void)
{
	char	**strs = NULL;
	strs [0] = "Hello";
	strs [1] = "world";
	strs [2] = "i";
	strs [3] = "am";
	strs [4] = "here";
	strs [5] = "again";
	char	*sep = "...";
	char	*joined = ft_strjoin(6, strs, sep);

	printf("%s", joined);
	free(joined);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	char	*joined_str;

	total_len = ft_total_strlen(size, strs) + ft_total_strlen(size - 1, sep);
	joined_str = (char *)malloc((total_len + 1) * sizeof(char));

	return (joined_str);
}

int	ft_total_strlen(int size, char **strs)
{
	
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
}
