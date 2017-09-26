/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeuleya <jkeuleya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:10:20 by jkeuleya          #+#    #+#             */
/*   Updated: 2014/11/09 15:08:26 by jkeuleya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

char	*ft_itoa(int n)
{
	char	*finalret;
	int		ntemp;
	size_t	size;
	char	sign;

	sign = (n < 0) ? -1 : 1;
	size = 2 + (n < 0);
	ntemp = n;
	while ((n = n / 10))
		size++;
	n = ntemp;
	if ((finalret = (char *)malloc(sizeof(char) * size--)) == NULL)
		return (NULL);
	finalret[size--] = '\0';
	finalret[size--] = sign * (n % 10) + '0';
	while ((n = n / 10))
		finalret[size--] = sign * (n % 10) + '0';
	if (sign < 0)
		finalret[size] = '-';
	return (finalret);
}
