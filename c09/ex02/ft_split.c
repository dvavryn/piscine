/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 19:47:55 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/25 20:29:27 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char **ft_split(char *str, char *charset);

int main(void)
{
	char *str = "Hello.world.here.i.am";
	char *charset = ".";

	char **result = ft_split(str, charset);
	int i = 0;
	while (result[i] != 0)
	{
		printf("%s", result[i]);
		i++;
	}
	free(result);
}



char	**ft_split(char *str, char *charset)
{
	char	**result;
	if (ft_strlen(str) == 0 || ft_strlen)
		result = (char **)malloc(sizeof(char *));

}