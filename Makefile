# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/27 20:50:07 by jaqrodri          #+#    #+#              #
#    Updated: 2021/04/05 23:05:05 by jaqrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = clang
CC_FLAGS =	-g \
			-c \
			-Wall \
			-Wextra \
			-Werror \
			-I${INCLUDE_DIR}

SRC_DIR =./srcs

SRCS =	${SRC_DIR}/ft_putstring_fd.c \
		${SRC_DIR}/ft_atoi.c \
		${SRC_DIR}/print_stack.c \
		${SRC_DIR}/swap.c \
		${SRC_DIR}/free_stack.c \
		${SRC_DIR}/ss.c \
		${SRC_DIR}/checker.c

OBJ_DIR = ./objects

OBJ = $(patsubst ${SRC_DIR}/%.c, ${OBJ_DIR}/%.o, $(SRCS))

INCLUDE_DIR = ./include

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -fsanitize=address $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CC_FLAGS) $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: all
	./$(NAME)