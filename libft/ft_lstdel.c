/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeuleya <jkeuleya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/29 16:12:27 by jkeuleya          #+#    #+#             */
/*   Updated: 2015/01/02 17:04:50 by jkeuleya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list*p_it;
	t_list*p_next;

	if (!alst || !*alst)
		return ;
	p_it = (*alst);
	p_next = (*alst)->next;
	ft_lstdelone(&p_it, del);
	if (p_next)
		ft_lstdel(&p_next, del);
	*alst = NULL;
}
