CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
SRC = ft_printf.c\
	  ft_format_byte.c\
	  ft_format_char.c\
	  ft_format_hexa.c\
	  ft_format_hexaup.c\
	  ft_format_int.c\
	  ft_format_ptr.c\
	  ft_format_str.c\
	  ft_format_uint.c\
	  ft_intlen.c\
	  ft_itoa_base.c\
	  ft_putchar.c\
	  ft_putnbr.c\
	  ft_putstr.c\
	  ft_select_format.c\
	  ft_strlen.c\
#	  ft_putnbr_float.c\
#	  ft_format_float.c\

PATH=$(basename $(SRC))
OBJ=$(addsuffix .o, $(PATH))

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $^
	ranlib $(NAME)

%.o: %.c
		gcc -g -o $@ -c $< $(CFLAGS)

clean:
		@rm -rf $(OBJ)

fclean: clean mrproper

re: fclean all

.PHONY: clean mrproper

mrproper: clean
		@rm -rf $(NAME)

