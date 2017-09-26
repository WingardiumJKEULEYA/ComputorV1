/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_computor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeuleya <jkeuleya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/30 11:03:05 by jkeuleya          #+#    #+#             */
/*   Updated: 2015/03/30 11:03:07 by jkeuleya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

static int		ft_max(char *str)
{
	int			i;
	int			max;
	int			tmp;

	i = 0;
	max = 0;
	while (str[i])
	{
		if (str[i] == '^')
		{
			tmp = ft_atoi(&(str[i + 1]));
			if (tmp > max)
				max = tmp;
		}
		i++;
	}
	return (max);
}

static double	ft_parse2(char *str, int degre, int i, double result)
{
	int			tmp;
	int			point;
	int			signe;

	while (str[i])
	{
		signe = 1;
		if (str[i] == '^')
		{
			point = i;
			tmp = ft_atoi(&(str[i + 1]));
			if (tmp == degre)
			{
				while (str[i] && str[i] != '+' && str[i] != '-' && i >= 0)
					i--;
				if (str[i] == '-')
					signe = -1;
				result = result + (ft_atof(&(str[i + 1])) * signe);
				i = point;
			}
		}
		i++;
	}
	return (result);
}

static double	ft_parse(char *str, int degre, int i, double result)
{
	int			tmp;
	int			point;
	int			signe;

	while (str[i] && str[i] != '=')
	{
		signe = 1;
		if (str[i] == '^')
		{
			point = i;
			tmp = ft_atoi(&(str[i + 1]));
			if (tmp == degre)
			{
				while (str[i] && str[i] != '+' && str[i] != '-' && i >= 0)
					i--;
				if (str[i] == '-')
					signe = -1;
				result = result + (ft_atof(&(str[i + 1])) * signe);
				i = point;
			}
		}
		i++;
	}
	result = result - ft_parse2(&(str[i + 1]), degre, 0, 0);
	return (result);
}

void			ft_computor(char *str)
{
	t_computor	e;
	int			i;

	e.max = ft_max(str);
	e.x = malloc(sizeof(double) * (e.max + 1));
	i = 0;
	while (i <= e.max)
	{
		e.x[i] = 0;
		i++;
	}
	i = 0;
	while (i <= e.max)
	{
		e.x[i] = ft_parse(str, i, 0, 0);
		i++;
	}
	if (ft_aff(e) == 0)
		ft_solve(e);
}
