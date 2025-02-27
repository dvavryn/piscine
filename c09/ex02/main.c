#include <stdio.h>
#include <stdlib.h>

int	issep(char c, char *charset);
int count_words(char *string, char *charset);
char **ft_split(char *string, char *charset);

int main (void)
{
	char *string = "Hello i am a test string";
	char *charset = " ";
	char **hello;

	hello = ft_split(string, charset);
	int i = 0;
	while (hello[i] != NULL)
	{
		printf("%s", hello[i]);
		i++;
	}
}

char **ft_split(char *string, char *charset)
{
	char	**ret;
	int		word_count;

	word_count = count_words(string, charset);
	ret = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!ret)
	{
		free(ret);
		return (ret);
	}
	return (ret);
}

int count_words(char *string, char *charset)
{
	int	words;
	int i;

	words = 0;
	i = 0;
	while (string[i] != '\0')
	{
		if (issep(string[i], charset) == 1 && issep(string[i+1], charset) == 0)
			words++;
		i++;
	}
	return (words - 1);
}

int	issep(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i] != '\0')
		if (c == charset[i++])
			return (1);
	return 0;
}
