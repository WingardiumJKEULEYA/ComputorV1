/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeuleya <jkeuleya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/30 11:03:26 by jkeuleya          #+#    #+#             */
/*   Updated: 2015/03/30 11:03:27 by jkeuleya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

static int		ft_check(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '^' && str[i] != '+' && str[i] != '-' && str[i] != 'X'
	&& str[i] != 'x' && str[i] != '=' && str[i] != '.' && !ft_isdigit(str[i])
	&& str[i] != ' ' && str[i] != '*')
		{
			printf("%sWRONG USAGE : ./ft_computor \"function\"%s", RED, NONE);
			return (0);
		}
		else
			i++;
	}
	return (1);
}

static int		ft_check2(char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '=')
			count++;
		i++;
	}
	if (count != 1)
	{
		printf("%sWRONG USAGE : ./ft_computor \"function\"%s", RED, NONE);
		return (0);
	}
	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			return (1);
		i++;
	}
	printf("%sWRONG USAGE : ./ft_computor \"function\"%s", RED, NONE);
	return (0);
}

int				main(int argc, char **argv)
{
	if (argc == 2 && ft_check(argv[1]) && ft_check2(argv[1]))
		ft_computor(argv[1]);
	else if (argc != 2)
		printf("%sWRONG USAGE : ./ft_computor \"function\"%s\n", RED, NONE);
	else
		printf("\n");
	return (0);
}
