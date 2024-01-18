# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 19:52:12 by jorvarea          #+#    #+#              #
#    Updated: 2024/01/18 14:11:56 by jorvarea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= printf.a
CC					= gcc
CFLAGS				= -Wall -Werror -Wextra
SOURCE_FILES   		= $(wildcard *.c)
OBJECT_DIR 			= obj
OBJECT_FILES		= $(SOURCE_FILES:%.c=$(OBJECT_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJECT_FILES) ft_printf_utils.h
	@ar -rcs $(NAME) $(OBJECT_FILES)

$(OBJECT_DIR)/%.o: %.c
	@mkdir -p $(OBJECT_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJECT_DIR)
	
fclean: clean
	@rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re