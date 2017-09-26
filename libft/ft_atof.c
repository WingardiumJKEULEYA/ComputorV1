/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeuleya <jkeuleya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/30 11:17:53 by jkeuleya          #+#    #+#             */
/*   Updated: 2015/03/30 11:17:54 by jkeuleya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "includes/libft.h"

static double	ft_point(char *str)
{
	int			i;
	double		result;
	double		j;

	j = 10;
	result = 0;
	i = 0;
	while (str[i] <= '9' && str[i] >= '0')
	{
		result = result + ((str[i] - '0') / j);
		j = j * 10;
		i++;
	}
	return (result);
}

double			ft_atof(char *str)
{
	int			i;
	double		result;
	int			j;

	i = 0;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	j = i;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (str[i] == '.')
		result = result + ft_point(&str[i + 1]);
	if (str[j] == '-')
		result = result * -1;
	return (result);
}
