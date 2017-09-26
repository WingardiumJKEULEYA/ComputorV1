/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeuleya <jkeuleya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 17:18:45 by jkeuleya          #+#    #+#             */
/*   Updated: 2014/11/08 18:46:36 by jkeuleya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cp;

	cp = (char*)malloc(sizeof(char*) * len);
	cp = ft_strncpy(cp, src, len);
	dst = (void*)ft_strncpy(dst, cp, len);
	free(cp);
	return (dst);
}
