/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeuleya <jkeuleya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/30 11:03:32 by jkeuleya          #+#    #+#             */
/*   Updated: 2015/03/30 11:03:33 by jkeuleya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

double	ft_square(double x)
{
	double xhi;
	double xlo;
	double guess;
	double new_guess;

	guess = x / 2;
	xlo = 0;
	xhi = x;
	while (guess * guess != x)
	{
		if (guess * guess > x)
			xhi = guess;
		else
			xlo = guess;
		new_guess = (xhi + xlo) / 2;
		if (new_guess == guess)
			return (guess);
		guess = new_guess;
	}
	return (guess);
}

double	ft_power(double nb, int power)
{
	double	result;

	if (nb == 0)
		return (0);
	result = 1;
	if (power > 0)
	{
		while (power > 0)
		{
			result = result * nb;
			power = power - 1;
		}
	}
	else if (power < 0)
	{
		while (power < 0)
		{
			result = result * nb;
			power = power + 1;
		}
		result = 1 / result;
	}
	return (result);
}
