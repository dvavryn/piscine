/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 16:31:40 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/12 13:34:37 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Original Array: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	ft_rev_int_tab(arr, size);
	printf("\nReversed array: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	buf;

	counter = 0;
	while (counter < size / 2)
	{
		buf = tab[counter];
		tab[counter] = tab[size - counter - 1];
		tab[size - counter - 1] = buf;
		counter++;
	}
}
