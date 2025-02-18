/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:58:06 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/12 13:33:51 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void	ft_swap(int *a, int *b);

int main(void)
{
    int a = 4;
    int b = 3;

    int *pta = &a;
    int *ptb = &b;

    printf("a %i, b %i \n", a,b );
    ft_swap(pta, ptb);
    printf("a %i, b %i \n", a,b );
}
*/
void	ft_swap(int *a, int *b)
{
	int	buf;

	buf = *a;
	*a = *b;
	*b = buf;
}
