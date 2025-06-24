/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosda <marcosda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 16:26:57 by marcosda          #+#    #+#             */
/*   Updated: 2025/06/02 15:37:18 by marcosda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
void main(void)
{
	int a;
	int b;
	int div;
	int mod;
	
	a = 10;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("%i\n%i", div, mod);
}*/