/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosda <marcosda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 07:46:11 by marcosda          #+#    #+#             */
/*   Updated: 2025/06/02 17:22:57 by marcosda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;

	i = 0;
	while (i < size / 2)
	{
		n = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = n;
		i++;
	}
}
/*
int main(void)
{
	int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //indice [0] até [9]

	ft_rev_int_tab(list, 10);
	int i = 0;
		while (i < 10)
	{
		printf("%d, ", list[i]);
		i++;
	}
	return (0);
}
*/