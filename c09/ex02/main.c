#include <stdio.h>
#include <stdlib.h>

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
	}
	return ;
}

char **ft_split(char *string, char *charset)
{

}
