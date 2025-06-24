/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosda <marcosda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:25:53 by marcosda          #+#    #+#             */
/*   Updated: 2025/05/29 15:52:20 by marcosda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put(int a)
{
	char	b;
	char	c;

	b = a / 10 + '0';
	c = a % 10 + '0';
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			put(i);
			write (1, " ", 1);
			put(j);
			if (!(i == 98 && j == 99))
			{
				write (1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
