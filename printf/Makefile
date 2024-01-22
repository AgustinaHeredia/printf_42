# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agustinaheredia <agustinaheredia@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/30 11:14:08 by agheredi          #+#    #+#              #
#    Updated: 2023/06/06 21:02:26 by agustinaher      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c \
		ft_arg_c.c \
		ft_arg_d.c \
		ft_arg_p.c \
		ft_arg_porcent.c \
		ft_arg_s.c \
		ft_arg_u.c \
		ft_arg_x.c \
		ft_nbrlen.c \
		ft_read_text.c \
		ft_search_arg.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_strlen.c \
		ft_strchr.c \

OBJS = $(SRCS:.c=.o)

HEADER = ft_printf.h

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	ar -rcs $(NAME) $(OBJS)

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS) 

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : re clean fclean all
