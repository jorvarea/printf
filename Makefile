# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 19:52:12 by jorvarea          #+#    #+#              #
#    Updated: 2023/11/24 20:17:45 by jorvarea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= libftprintf.a
CC					= gcc
CFLAGS				= -Wall -Werror -Wextra
SOURCE_FILES   		= ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c \
					  ft_putptr.c ft_putstr.c ft_secure_putchar.c ft_uputnbr.c
OBJECT_FILES		= $(SOURCE_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECT_FILES) ft_printf.h
	@ar -rcs $(NAME) $(OBJECT_FILES)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJECT_FILES)
	
fclean: clean
	@rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re