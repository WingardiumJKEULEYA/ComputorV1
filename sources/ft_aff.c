/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeuleya <jkeuleya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/30 11:02:56 by jkeuleya          #+#    #+#             */
/*   Updated: 2015/03/30 11:02:57 by jkeuleya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

static int	ft_aff2(t_computor e)
{
	int		i;
	int		verif;

	i = e.max;
	verif = 0;
	while (i >= 0 && verif == 0)
	{
		if (e.x[i] != 0)
		{
			printf("%sPolynomial degree: ", BROWN);
			printf("%s%d%s\n", YELLOW, i, NONE);
			if (i > 2)
			{
				printf("%sThe polynomial degree is stricly"
				" greater than 2, I can't solve.%s\n", RED, NONE);
				return (1);
			}
			verif = 1;
		}
		i = i - 1;
	}
	return (0);
}

static int	ft_checkmax(t_computor e)
{
	int		i;

	i = e.max;
	while (e.x[i] == 0)
		i--;
	return (i);
}

static int	ft_aff3(t_computor e, int i)
{
	double	tmp;
	int		maxi;

	printf("%sReduced form: \n%s", BROWN, NONE);
	maxi = ft_checkmax(e);
	while (i <= maxi)
	{
		tmp = e.x[i];
		if (i != 0 && e.x[i] >= 0)
			printf("%s + %s", LIGHT_GREEN, NONE);
		else if (i != 0 && e.x[i] < 0)
		{
			printf("%s - %s", LIGHT_GREEN, NONE);
			tmp = -e.x[i];
		}
		if (i > 1)
			printf("%g * %sx%s^%d%s", tmp, PURPLE, BLUE, i, NONE);
		else if (i == 1)
			printf("%g%sx%s", tmp, LIGHT_PURPLE, NONE);
		else
			printf("%g", tmp);
		i = i + 1;
	}
	printf("%s =%s 0\n", LIGHT_GREEN, NONE);
	return (ft_aff2(e));
}

int			ft_aff(t_computor e)
{
	if (e.max == 0 && e.x[0] == 0)
		printf("%sL'ensemble des reels verifie l'equation%s\n", RED, NONE);
	else if (e.max == 0)
		printf("%sInvalid equation%s\n", RED, NONE);
	else
		return (ft_aff3(e, 0));
	return (1);
}
