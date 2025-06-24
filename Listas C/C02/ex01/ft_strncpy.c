/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosda <marcosda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 15:17:52 by marcosda          #+#    #+#             */
/*   Updated: 2025/06/10 16:43:05 by marcosda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
		}
		i++;
	}
	return (dest);
}
