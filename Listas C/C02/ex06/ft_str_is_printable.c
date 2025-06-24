/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosda <marcosda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 18:59:19 by marcosda          #+#    #+#             */
/*   Updated: 2025/06/10 16:17:34 by marcosda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	only_printable;

	i = 0;
	only_printable = 1;
	while (only_printable && str[i] != '\0')
	{
		only_printable = (str[i] >= ' ' && str[i] <= '~');
		i++;
	}
	return (only_printable);
}
