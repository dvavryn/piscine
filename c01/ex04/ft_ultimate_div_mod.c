/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 21:57:30 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/12 13:34:09 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int i = 42;
	int i_= i;
	int j = 8;
	int j_ = j;

	int *pt1 = &i;
	int *pt2 = &j;

	ft_ultimate_div_mod(pt1, pt2);
	printf("%i / %i = %i | %i R", i_, j_, i, j);
}
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	numa;
	int	numb;
	int	result;
	int	rest;

	numa = *a;
	numb = *b;
	if (numb != 0)
	{
		result = numa / numb;
		rest = numa % numb;
		*a = result;
		*b = rest;
	}
}
