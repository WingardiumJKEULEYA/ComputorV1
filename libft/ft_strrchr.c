/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeuleya <jkeuleya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 10:05:42 by jkeuleya          #+#    #+#             */
/*   Updated: 2014/11/05 10:47:50 by jkeuleya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	findchar;
	char	*found;
	int		i;

	findchar = c;
	found = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == findchar)
			found = (char *)(s + i);
		i++;
	}
	if (s[i] == findchar)
		found = (char *)(s + i);
	return (found);
}
