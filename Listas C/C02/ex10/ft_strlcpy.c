/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosda <marcosda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:47:22 by marcosda          #+#    #+#             */
/*   Updated: 2025/06/10 16:43:29 by marcosda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	u;

	u = 0;
	if (size > 0)
	{
		while (u < (size - 1))
		{
			dest[u] = src[u];
			u++;
		}
	}
	dest[u] = '\0';
	return (ft_strlen(src));
}
