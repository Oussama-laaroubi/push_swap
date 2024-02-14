# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olaaroub <olaaroub@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/08 23:13:39 by olaaroub          #+#    #+#              #
#    Updated: 2024/02/14 18:53:05 by olaaroub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

# CFLAGS = -fsanitize=address -g3 -Wall -Wextra -Werror
CFLAGS = -Wall -Wextra -Werror

SRC = ./sources/main.c ./sources/stack_utils.c ./sources/all_checks.c ./sources/indexing.c ./sources/sort_stack.c
SRC += ./sources/helps_for_sort.c ./sources/start_sorting.c ./sources/stack_specs.c
SRC += ./operations/reverse_rotate.c ./operations/push.c ./operations/swap.c ./operations/rotate.c

OBJ = $(SRC:.c=.o)

NAME = push_swap

LIB  = ../libft/libft.a

all : $(NAME)

$(LIB):
	make -C ../libft/


$(NAME): $(OBJ) $(LIB)
	$(CC) $(CFLAGS) $(OBJ) $(LIB) -o $(NAME)

clean:
	rm -rf $(OBJ)
	make clean -C ../libft

fclean:
	rm -rf $(NAME) $(OBJ)
	make fclean -C ../libft

re: fclean all

