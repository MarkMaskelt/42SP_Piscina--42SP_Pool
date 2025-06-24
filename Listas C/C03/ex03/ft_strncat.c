/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosda <marcosda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:02:28 by marcosda          #+#    #+#             */
/*   Updated: 2025/06/17 16:41:18 by marcosda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char				*d;
	char				*s;
	unsigned int		i;

	d = dest;
	s = src;
	while (*d)
	{
		d++;
	}
	i = 0;
	while (i < nb && *s)
	{
		*d = *s;
		d++;
		s++;
		i++;
	}
	*d = '\0';
	return (dest);
}
