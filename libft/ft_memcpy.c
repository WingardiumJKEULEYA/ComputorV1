/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeuleya <jkeuleya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 18:59:24 by jkeuleya          #+#    #+#             */
/*   Updated: 2014/11/07 19:25:58 by jkeuleya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*p;
	const char	*p2;

	p = (char*)dst;
	p2 = (const char*)src;
	while (n > 0)
	{
		p[n - 1] = p2[n - 1];
		n--;
	}
	return (dst);
}
