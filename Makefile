# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/27 20:50:07 by jaqrodri          #+#    #+#              #
#    Updated: 2021/04/16 00:09:32 by jaqrodri         ###   ########.fr        #
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
		${SRC_DIR}/print_error.c \
		${SRC_DIR}/free_stack.c \
		${SRC_DIR}/push_stack.c \
		${SRC_DIR}/pop_stack.c \
		${SRC_DIR}/rotate_stack.c \
		${SRC_DIR}/reverse_rotate_stack.c \
		${SRC_DIR}/swap.c \
		${SRC_DIR}/pa.c \
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