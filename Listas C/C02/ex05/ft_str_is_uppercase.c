/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosda <marcosda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 18:59:19 by marcosda          #+#    #+#             */
/*   Updated: 2025/06/10 16:17:24 by marcosda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	only_uppercase;

	i = 0;
	only_uppercase = 1;
	while (only_uppercase && str[i] != '\0')
	{
		only_uppercase = (str[i] >= 'A' && str[i] <= 'Z');
		i++;
	}
	return (only_uppercase);
}
