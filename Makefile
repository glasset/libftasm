#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/11/01 14:25:37 by glasset           #+#    #+#             *#
#*   Updated: 2016/11/13 18:35:40 by glasset          ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = libfts.a


SRC = ft_bzero.s ft_strcat.s ft_isupper.s ft_islower.s ft_isalpha.s

OBJ = $(SRC:%.s=%.o)


TEST = test/test
FILE = is_alpha.c main.c
TEST_SRC = $(addprefix test/, $(FILE))
TEST_OBJ = $(TEST_SRC:%.c=%.o)

ASSEMBLER = ~/Downloads/nasm-2.10/nasm
FORMAT = macho64

.PHONY: all clean fclean re
all : $(NAME) $(TEST)

$(NAME) : $(OBJ)
	@echo "Adding to ar($@): $<"
	@ar rcs $@ $^

%.o: %.s
	@echo "Compiling: $<"
	@$(ASSEMBLER) -f $(FORMAT) $< -o $@

%.o: %.c
	@echo "Compiling test: $<"
	gcc -c -I . $< -o $@

clean:
	@rm -f $(OBJ)
	@rm -f $(TEST_OBJ)

$(TEST) : $(TEST_OBJ)
	@echo "Compiling gcc: $<"
	gcc $(TEST_OBJ) -L. -lfts -o $(TEST)
	./test/test


fclean: clean
	@rm -f $(NAME)
	@rm -f $(TEST)

re: fclean all

