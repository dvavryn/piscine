/* 
	-	Reproduce the behavior of the function strdup() (man strdup).

	-	Here is how it should be prototyped:
				char	*ft_strdup(char *src);


	GPT:
		-	It allocates memory for the new string using malloc.
		-	The returned string is a copy of the original string, including the
			null-terminator.
		-	You need to free the returned pointer when done to avoid memory leaks.

		If the memory allocation fails, strdup returns NULL.
 */
char	*ft_strdup(char *src);

int main(void)
{
	char *original = "Hello World!";
	char *copy = ft_strdup(original);

	if (copy != NULL)
	{
		printf("Original:	%s\n", original);
		printf("Copy:		%s\n", copy);
	}
	else
	{
		printf("Memory allocation failed!\n");
	}
}

char	*ft_strdup(char *src)
{
	
}