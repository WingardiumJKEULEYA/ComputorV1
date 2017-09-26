/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeuleya <jkeuleya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/16 14:23:34 by jkeuleya          #+#    #+#             */
/*   Updated: 2015/01/16 14:23:35 by jkeuleya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "includes/libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*out;
	void	*cont;

	out = (t_list *)malloc(sizeof(t_list));
	if (out == NULL)
		return (NULL);
	out->content_size = (content != NULL) ? content_size : 0;
	cont = ft_memalloc(out->content_size);
	cont = ft_memcpy(cont, content, out->content_size);
	out->content = cont;
	out->next = NULL;
	return (out);
}
