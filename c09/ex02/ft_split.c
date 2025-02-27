#include <stdlib.h>
#include <stdio.h>

int	ft_ischarset(char c, char *charset);
int	ft_count_words(char *str, char *charset);
char *ft_word_splitter(char *str, char *charset);
char **ft_split(char *str, char *charset);

int	main(void)
{
	char *str;
	char *charset;
	char **words;
	int i;

	str = "Hello i.am/a*test@string";
	charset = " ./*@";
	words = ft_split(str, charset);
	i = 0;
	printf("Before: %s\n After: \n", str);
	while (words[i])
	{
		printf("%s\n",words[i]);
		free(words[i]);
		i++;
	}
	free(words);
}

char **ft_split(char *str, char *charset)
{
	int i;
	int j;
	char **words;

	words = (char **)malloc(sizeof(char*) * (ft_count_words(str, charset) + 1));
	if (words == NULL || str == NULL || charset == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{	
		if (!ft_ischarset(str[i], charset))
		{
			words[j] = ft_word_splitter(&str[i], charset);
			while (str[i] && !ft_ischarset(str[i], charset))
				i++;
			j++;
		}
		else
			i++;
	}
	words[j] = 0;
	return (words);
}

char *ft_word_splitter(char *str, char *charset)
{
	char *word;
	int i;

	i = 0;
	while (str[i] && !ft_ischarset(str[i], charset))
		i++;
	word = (char *)malloc(sizeof(char *) + (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && !ft_ischarset(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

int ft_count_words(char *str, char *charset)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if(!ft_ischarset(str[i], charset))
		{
			words++;
			while(str[i] && !ft_ischarset(str[i], charset))
				i++;
		}
		else
			i++;
	}
	return (words);
}

int ft_ischarset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}