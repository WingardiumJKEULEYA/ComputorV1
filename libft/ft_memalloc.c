/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeuleya <jkeuleya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:55:22 by jkeuleya          #+#    #+#             */
/*   Updated: 2014/11/09 15:10:00 by jkeuleya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void				*mem;
	unsigned int		i;
	char				*explorer;

	i = 0;
	mem = (void *)malloc(size);
	explorer = (char *)mem;
	if (mem != NULL)
	{
		while (i++ < size)
			*explorer++ = 0;
	}
	return (mem);
}
