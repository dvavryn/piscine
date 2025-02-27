#include <stdio.h>
#include <stdlib.h>

int	issep(char c, char *charset);
int count_words(char *string, char *charset);
char **ft_split(char *string, char *charset);
char *worddup(int *index, char *string, char *charset);

int main (void)
{
    char *string = "Hello i am .  ; ; hi; //  a test string";
    char *charset = " .;/";
    char **hello;

    hello = ft_split(string, charset);
    int i = 0;
    while (hello[i] != NULL)
    {
        printf("%s\n", hello[i]);
        i++;
    }
    free(hello);
}

char **ft_split(char *string, char *charset)
{
    char	**ret;
    int		word_count;
    int i;
    int index;

    word_count = count_words(string, charset);
    ret = (char **)malloc((word_count + 1) * sizeof(char *));
    if (!ret)
        return (ret);
    i = 0;
    index = 0;
    while (i < word_count)
    {
        while (issep(string[index], charset) && string[index] != '\0')
        {
            index++;
        }
        if ((index == 0 || issep(string[index - 1], charset)) &&
            (string[index] != '\0' && !issep(string[index], charset)) &&
            (string[index + 1] == '\0' || issep(string[index + 1], charset)))
        {
            ret[i] = worddup(&index, string, charset);
            if (ret[i] == NULL)
                return NULL;
            i++;
        }
        else
        {
            while (string[index] != '\0' && !issep(string[index], charset))
            {
                index++;
            }
            if (string[index] == '\0' || issep(string[index], charset)) {
                index++;
            }
        }
    }
    ret[i] = NULL;
    return ret;
}

char *worddup(int *index, char *string, char *charset)
{
    char *ret;
    int start;
    int end;
    int k;

    start = *index;
    while (string[*index] != '\0' && !issep(string[*index], charset))
    {
        (*index)++;
    }
    end = *index;
    ret = (char *)malloc((end - start + 1) * sizeof(char));
    if (!ret)
        return (NULL);
    k = 0;
    while (start < end)
    {
        ret[k] = string[start];
        k++;
        start++;
    }
    ret[k] = '\0';
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
    {
        if (c == charset[i])
        {
            return (1);
        }
        i++;
    }
    return 0;
}