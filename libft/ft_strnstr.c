/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeuleya <jkeuleya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:34:54 by jkeuleya          #+#    #+#             */
/*   Updated: 2014/11/13 17:33:18 by jkeuleya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strnstr(char const *s1, char const *s2, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (ft_strlen(s2) == 0)
		return (char *)(s1);
	while (s1 && s1[i])
	{
		if (s1[i] == s2[0])
		{
			j = 0;
			while (s1[i + j] == s2[j] && s1[i + j] && (i + j) < n)
			{
				j++;
			}
			if ((char)s2[j] == '\0')
				return (char *)(&s1[i]);
		}
		i++;
	}
	return (NULL);
}
