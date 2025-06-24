/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosda <marcosda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 16:42:43 by marcosda          #+#    #+#             */
/*   Updated: 2025/06/02 17:18:44 by marcosda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*void	main(void)
{
	int a;
	int b;

	a = 10;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("%i\n%i", a, b);
}*/