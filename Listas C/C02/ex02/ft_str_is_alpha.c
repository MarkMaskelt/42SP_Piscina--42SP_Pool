/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosda <marcosda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:53:26 by marcosda          #+#    #+#             */
/*   Updated: 2025/06/10 16:17:28 by marcosda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	only_alpha;

	i = 0;
	only_alpha = 1;
	while (only_alpha && str[i] != '\0')
	{
		only_alpha = ((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z'));
		i++;
	}
	return (only_alpha);
}
