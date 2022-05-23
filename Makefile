# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/10 14:40:38 by yel-aoun          #+#    #+#              #
#    Updated: 2022/05/22 17:22:49 by yel-aoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = push_swap.c utils.c ft_swap.c ft_rotate.c ft_reverse_rotate.c ft_push.c ft_help.c ft_atoi.c ft_soort_func.c sort_five.c big_sort.c sort_utils.c check_args.c
BNS_SRCS = checker.c ft_help.c strncmp.c ft_push_bonus.c ft_swap.c ft_rotate.c ft_reverse_rotate.c get_next_line.c get_next_line_utils.c ft_atoi.c utils.c check_args.c
FLAGS = -Wall -Wextra -Werror
CC = gcc
NAME = push_swap
OBJS = $(SRCS:.c=.o)
BNS_OBJ = $(BNS_SRCS:.c=.o)
NAME_O = checker

all : $(NAME)
$(NAME) : $(OBJS)
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)
bonus : $(NAME_O)
$(NAME_O) : $(BNS_OBJ)
		$(CC) $(FLAGS) $(BNS_SRCS) -o $(NAME_O)
clean :
		rm -f $(OBJS) $(BNS_OBJ)
fclean : clean
	rm -f $(NAME)
	rm -f $(NAME_O)

re : fclean all

.PHONY: all clean fclean re