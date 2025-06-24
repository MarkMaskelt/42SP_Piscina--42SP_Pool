/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosda <marcosda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 18:59:19 by marcosda          #+#    #+#             */
/*   Updated: 2025/06/10 16:17:12 by marcosda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	only_numeric;

	i = 0;
	only_numeric = 1;
	while (only_numeric && str[i] != '\0')
	{
		only_numeric = (str[i] >= '0' && str[i] <= '9');
		i++;
	}
	return (only_numeric);
}
