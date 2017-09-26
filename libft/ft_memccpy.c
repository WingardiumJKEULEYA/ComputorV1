/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeuleya <jkeuleya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 18:10:30 by jkeuleya          #+#    #+#             */
/*   Updated: 2014/11/13 19:35:48 by jkeuleya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	char			*p;
	const char		*p2;

	i = 0;
	p = (char *)dst;
	p2 = (const char *)src;
	while (i < n && (i == 0 || p2[i - 1] != c))
	{
		p[i] = p2[i];
		i++;
	}
	if (i > 0 && p2[i - 1] == c)
		return (p + i);
	else
		return (NULL);
}
