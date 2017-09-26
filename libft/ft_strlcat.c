/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeuleya <jkeuleya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 13:37:57 by jkeuleya          #+#    #+#             */
/*   Updated: 2014/11/10 15:33:44 by jkeuleya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	ss;

	s = ft_strlen(dst);
	ss = ft_strlen(src);
	if (size <= s)
		return (size + ss);
	if (ss < size - s)
	{
		ft_memcpy(dst + s, src, ss);
		dst += s + ss;
	}
	else
	{
		ft_memcpy(dst + s, src, size - s - 1);
		dst += size - 1;
	}
	*dst = '\0';
	return (s + ss);
}
