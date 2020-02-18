# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mstepina <mstepina@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/01 16:26:48 by mstepina          #+#    #+#              #
#    Updated: 2020/02/12 16:36:40 by mstepina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS=*.c ft_printf/*.c

OBJECTS=*.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS)
	ar -rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
