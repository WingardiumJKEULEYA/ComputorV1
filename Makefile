# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkeuleya <jkeuleya@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/30 11:02:04 by jkeuleya          #+#    #+#              #
#    Updated: 2015/03/30 11:02:05 by jkeuleya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	computor
LIBFT	=	libft.a

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
LDFLAGS =

CFILE	=	main.c ft_aff.c ft_computor.c ft_solve.c math.c

DIR_LIB	=	./libft/
DIR_SRC	=	./sources/
SRC		=	$(patsubst %.c, $(DIR_SRC)%.c, $(CFILE))
DIR_OBJ	=	./objects/
OBJ		=	$(patsubst %.c, $(DIR_OBJ)%.o, $(CFILE))

all: $(NAME)

$(NAME): $(OBJ)
	@ /bin/echo -n "Archiving objects in $(LIBFT):"
	@ make -sC $(DIR_LIB)
	@ echo " \033[32mAll done!\033[0m"
	@ /bin/echo -n "Compiling objects in $(NAME):"
	@$(CC) $(LDFLAGS) -o $@ -L $(DIR_LIB) -l ft ${^:mkobjdir=}
	@ echo " \033[32mAll done!\033[0m"

$(DIR_OBJ)%.o: $(DIR_SRC)%.c
	@ mkdir -p ${@:$(notdir $@)=}
	@ /bin/echo -n "Compiling $(notdir $<)"
	@ $(CC) $(CFLAGS) -I. -c -o $@ $<
	@ echo " \033[32mOK\033[0m"

clean:
	@ /bin/echo -n "Removing object files:"
	@ rm -rf $(DIR_OBJ)
	@ make -C $(DIR_LIB) clean
	@ echo " \033[32mdone\033[0m"

fclean: clean
	@ /bin/echo -n "Removing library:"
	@ make -C $(DIR_LIB) fclean
	@ echo " \033[32mdone\033[0m"
	@ /bin/echo -n "Removing $(NAME):"
	@ rm -rf $(NAME)
	@ echo " \033[32mdone\033[0m"

re: fclean all

.PHONY: re fclean clean all

