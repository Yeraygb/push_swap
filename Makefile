# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 13:39:06 by ygonzale          #+#    #+#              #
#    Updated: 2022/10/24 13:08:41 by ygonzale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = push_swap.c \
	src/ft_split.c \
	src/check_errors.c \
	src/utils.c \
	src/ft_atoi.c

OBJS = $(SRC:.c=.o)
FLAGS = gcc -Wall -Werror -Wextra -fsanitize=address -g3

$(NAME): $(OBJS)
	@echo ✅ "\033[92;3;4mcompilation done\033[0m" ✅
	@$(FLAGS) $(LINKS) $(SRC) -o push_swap

%.o : %.c
	$(FLAGS) -c $< -o $@


all: $(NAME)

clean:
	@rm -f $(OBJS)
	@echo 🗑 "\033[31;3;4mall clean\033[0m" 🗑

fclean: clean
	@rm -f $(NAME)
	@rm -rf push_swap

re: fclean all

.PHONY = all clean fclean re