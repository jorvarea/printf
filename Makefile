# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 19:52:12 by jorvarea          #+#    #+#              #
#    Updated: 2023/10/29 02:58:29 by jorvarea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= libftprintf.a
LIBFT 				= libft/libft.a
CC					= gcc
CFLAGS				= -Wall -Werror -Wextra
SOURCE_FILES   		= $(wildcard ft_*.c)
OBJECT_FILES		= $(SOURCE_FILES:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	@$(MAKE) -C libft

$(NAME): $(OBJECT_FILES) ft_printf.h
	@ar -rcs $(NAME) $(OBJECT_FILES)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJECT_FILES)
	@$(MAKE) -C libft clean
	
fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C libft fclean
	
re: fclean all

.PHONY: all clean fclean re