/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:06:44 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/12 13:47:38 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int ft_strlen(char *str);

int main()
{
    char dest[20] = "Hello, ";
    char src[] = "world!";
    unsigned int size = 15;

    printf("Testing ft_strlcat vs strlcat\n");

    // Test 1: Vergleich der Ergebnisse
    char dest_copy1[20];
    strcpy(dest_copy1, dest);
    
    unsigned int result1_ft = ft_strlcat(dest, src, size);
    unsigned int result1_str = strlcat(dest_copy1, src, size);

    printf("\nTest 1: Normaler Fall\n");
    printf("ft_strlcat result: %u, ft_strlcat dest: %s\n", result1_ft, dest);
    printf("strlcat result: %u, strlcat dest: %s\n", result1_str, dest_copy1);

    // Test 2: Buffer zu klein
    char dest2[10] = "Hi ";
    char dest_copy2[10];
    strcpy(dest_copy2, dest2);
    unsigned int size2 = 5;

    unsigned int result2_ft = ft_strlcat(dest2, src, size2);
    unsigned int result2_str = strlcat(dest_copy2, src, size2);

    printf("\nTest 2: Buffer zu klein\n");
    printf("ft_strlcat result: %u, ft_strlcat dest: %s\n", result2_ft, dest2);
    printf("strlcat result: %u, strlcat dest: %s\n", result2_str, dest_copy2);

    return 0;
} */
int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	count_d;
	unsigned int	count_s;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	count_d = dest_len;
	count_s = 0;
	if (size == 0)
		return (src_len);
	if (size <= dest_len)
		return (size + src_len);
	if (count_d < size)
	{
		while (count_d < size - 1 && src[count_s] != '\0')
		{
			dest[count_d] = src[count_s];
			count_d++;
			count_s++;
		}
		dest[count_d] = '\0';
	}
	return (dest_len + src_len);
}

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}
