#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/11/01 14:25:37 by glasset           #+#    #+#             *#
#*   Updated: 2016/11/01 14:54:07 by glasset          ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = libfts.a

SRC  = ./ft_bzero.s

OBJ = $(SRC:.c=.o)

.PHONY: all
all : $(NAME)

$(NAME) : $(SRC)
	nasm -f macho $?
	ar rc $(NAME) $(OBJ)

.PHONY: clean
clean:
	@rm -f $(OBJ)

.PHONY: fclean
fclean: clean
	@rm -f $(NAME)

.PHONY: re
re: fclean all

