#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/11/01 14:25:37 by glasset           #+#    #+#             *#
#*   Updated: 2016/11/27 14:43:42 by glasset          ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = libfts.a


SRC = ft_bzero.s ft_strcat.s ft_isupper.s ft_islower.s ft_isalpha.s ft_isdigit.s \
	  ft_isalnum.s ft_isascii.s ft_isprint.s ft_toupper.s ft_tolower.s ft_cat.s \
	  ft_puts.s ft_strlen.s ft_memset.s ft_memcpy.s ft_strdup.s ft_memchr.s \
	  ft_strjoin.s

OBJ = $(SRC:%.s=%.o)


TEST = test/test
FILE = main.c issomething.c puts.c strlen.c memset.c strdup.c cat.c memchr.c strjoin.c
TEST_SRC = $(addprefix test/, $(FILE))
TEST_OBJ = $(TEST_SRC:%.c=%.o)

ASSEMBLER = nasm
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

run_test:
	@./test/test

fclean: clean
	@rm -f $(NAME)
	@rm -f $(TEST)

re: fclean all

