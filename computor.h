/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   computor.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeuleya <jkeuleya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/30 11:02:40 by jkeuleya          #+#    #+#             */
/*   Updated: 2015/03/30 11:02:41 by jkeuleya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPUTOR_H
# define COMPUTOR_H

# define NONE			"\x1b[0m"
# define BLACK			"\033[0;30m"
# define DARK_GRAY		"\033[1;30m"
# define BLUE			"\033[0;34m"
# define LIGHT_BLUE		"\033[1;34m"
# define GREEN			"\033[0;32m"
# define LIGHT_GREEN	"\033[1;32m"
# define CYAN			"\033[0;36m"
# define LIGHT_CYAN		"\033[1;36m"
# define RED			"\033[0;31m"
# define LIGHT_RED		"\033[1;31m"
# define PURPLE			"\033[0;35m"
# define LIGHT_PURPLE	"\033[1;35m"
# define BROWN			"\033[0;33m"
# define YELLOW			"\033[1;33m"
# define LIGHT_GRAY		"\033[0;37m"
# define WHITE			"\033[1;37m"

# include <stdlib.h>
# include <unistd.h>
# include "libft/includes/libft.h"
# include <stdio.h>

typedef	struct	s_computor
{
	double		*x;
	int			max;
}				t_computor;

double			ft_power(double nb, int power);
double			ft_square(double x);
int				ft_aff(t_computor e);
void			ft_solve(t_computor e);
void			ft_computor(char *str);

#endif
