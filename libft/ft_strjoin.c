/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeuleya <jkeuleya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:03:28 by jkeuleya          #+#    #+#             */
/*   Updated: 2014/11/13 15:24:22 by jkeuleya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

static int		ft_cmp(char const *s1, char const *s2)
{
	int		j;

	j = 0;
	if (s1)
		j = ft_strlen(s1);
	if (s2)
		j = j + ft_strlen(s2);
	return (j);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	if (s1 || s2)
	{
		j = ft_cmp(s1, s2);
		if ((str = (char *)malloc(sizeof(char) * (j + 1))) == NULL)
			return (NULL);
		str[j] = '\0';
		j = 0;
		while (s1 && s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		while (s2 && s2[j])
		{
			str[i + j] = s2[j];
			j++;
		}
		return (str);
	}
	return (NULL);
}
