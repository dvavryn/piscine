/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 20:17:34 by dvavryn           #+#    #+#             */
/*   Updated: 2025/02/12 13:34:00 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod);

int	main (void)
{	
	// num1 durch num2 ist result || es bleibt rest rest
	//  21    /    5    =    4    ||            1

	// 21 / 5 = 4 | 1R
	
	int num1 = 21; // int a;
	int num2 = 5;  // int b;
	int result = 0;
	int rest = 0;;
	int buf = 0;

	int *div1 = &result;
	int *mod1 = &rest;

	ft_div_mod(num1, num2, div1, mod1);
	result = *div1;
	rest = *mod1;	
	printf("%i / %i = %i | %i Rest", num1, num2, result, rest); 
}
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
