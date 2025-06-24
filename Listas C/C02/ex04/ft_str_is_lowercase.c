/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosda <marcosda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 18:59:19 by marcosda          #+#    #+#             */
/*   Updated: 2025/06/10 16:17:17 by marcosda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	only_lowercase;

	i = 0;
	only_lowercase = 1;
	while (only_lowercase && str[i] != '\0')
	{
		only_lowercase = (str[i] >= 'a' && str[i] <= 'z');
		i++;
	}
	return (only_lowercase);
}
