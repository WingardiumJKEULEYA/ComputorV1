/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeuleya <jkeuleya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:44:01 by jkeuleya          #+#    #+#             */
/*   Updated: 2014/11/07 17:18:37 by jkeuleya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char			*p;

	i = 0;
	p = (char *)s;
	if (s && n > 0)
	{
		while (i < n)
		{
			if (p[i] == (char)c)
			{
				return ((void *)(p + i));
			}
			i++;
		}
	}
	return (NULL);
}
