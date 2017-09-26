/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeuleya <jkeuleya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/30 11:03:18 by jkeuleya          #+#    #+#             */
/*   Updated: 2015/03/31 14:21:04 by jkeuleya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

void			ft_deltaneg(double delta, t_computor e)
{
	if (e.x[0] > 0)
	{
		printf("%s%g + %g%s", YELLOW, (-e.x[1] / (2 * e.x[2])),
		ft_square(-delta) / (2 * e.x[2]), NONE);
		printf("%si%s\n", BLUE, NONE);
		printf("%s%g - %g%s", YELLOW, (-e.x[1] / (2 * e.x[2])),
		ft_square(-delta) / (2 * e.x[2]), NONE);
		printf("%si%s\n", BLUE, NONE);
	}
	else
	{
		printf("%s%g + %g%s", YELLOW, (-e.x[1] / (2 * -e.x[2])),
		ft_square(-delta) / (2 * -e.x[2]), NONE);
		printf("%si%s\n", BLUE, NONE);
		printf("%s%g - %g%s", YELLOW, (-e.x[1] / (2 * -e.x[2])),
		ft_square(-delta) / (2 * -e.x[2]), NONE);
		printf("%si%s\n", BLUE, NONE);
	}
}

static void		ft_check(t_computor e)
{
	if (e.x[0] != 0)
		printf("%s%g\n%s", YELLOW, -(e.x[1] / (2 * e.x[0])), NONE);
	else
		printf("%s0%s\n", YELLOW, NONE);
}

void			ft_polynome(t_computor e)
{
	double	delta;
	double	a;
	double	b;

	delta = ft_power(e.x[1], 2) - (4 * e.x[2] * e.x[0]);
	printf("%sDelta:%s %g\n", YELLOW, NONE, delta);
	if (delta > 0)
	{
		a = -e.x[1] - ft_square(delta);
		b = 2 * e.x[2];
		printf("%sDiscriminant is positive, the 2 solutions are:\n", GREEN);
		printf("%s%g\n", YELLOW, a / b);
		a = -e.x[1] + ft_square(delta);
		printf("%s%g%s\n", YELLOW, a / b, NONE);
	}
	else if (delta == 0)
	{
		ft_putendl("Discriminant is null, the solution is:");
		ft_check(e);
	}
	else
	{
		printf("%sDiscriminant is negative, the solutions are:%s\n", RED, NONE);
		ft_deltaneg(delta, e);
	}
}

void			ft_simple(t_computor e)
{
	ft_putendl("The solution is:");
	if (e.x[1] != 0)
	{
		if ((e.x[0] / e.x[1]) == 0)
			printf("%s0\n%s", YELLOW, NONE);
		else
			printf("%s%g\n%s", YELLOW, -e.x[0] / e.x[1], NONE);
	}
	else
		printf("%sInfinite solutions!%s\n", RED, NONE);
}

void			ft_solve(t_computor e)
{
	if (e.max == 2 && e.x[2] != 0)
		ft_polynome(e);
	else
		ft_simple(e);
}
