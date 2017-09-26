/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeuleya <jkeuleya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 10:14:19 by jkeuleya          #+#    #+#             */
/*   Updated: 2015/03/05 13:54:17 by jkeuleya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>

static int	ft_nbr(char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			j++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (i);
}

static char	*ft_word(char const *s, char c, int i)
{
	int		j;
	char	*str;

	j = 0;
	str = ft_strnew(j);
	if (str == NULL)
		return (NULL);
	while (s[i + j] && s[i + j] != c)
	{
		str[j] = s[i + j];
		j++;
	}
	return (str);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s || !(str = malloc(sizeof(char *) * (ft_nbr(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			if ((str[j] = ft_word(s, c, i)) == (NULL))
				return (NULL);
		while (s[i] && s[i] != c)
			i++;
		j++;
	}
	if (j == 0)
		str[j++] = NULL;
	str[j] = ft_memalloc(1);
	str[j] = NULL;
	return (str);
}
