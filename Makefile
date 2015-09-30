CFLAGS = -Wall -Werror -Wextra -I ./
NAME = libftprintf.a
SRCPATH = ./srcs/
SRC = $(SRCPATH)ft_printf.c\
	  $(SRCPATH)ft_format_byte.c\
	  $(SRCPATH)ft_format_char.c\
	  $(SRCPATH)ft_format_hexa.c\
	  $(SRCPATH)ft_format_hexaup.c\
	  $(SRCPATH)ft_format_int.c\
	  $(SRCPATH)ft_format_ptr.c\
	  $(SRCPATH)ft_format_str.c\
	  $(SRCPATH)ft_format_uint.c\
	  $(SRCPATH)ft_intlen.c\
	  $(SRCPATH)ft_itoa_base.c\
	  $(SRCPATH)ft_putchar.c\
	  $(SRCPATH)ft_putnbr.c\
	  $(SRCPATH)ft_putstr.c\
	  $(SRCPATH)ft_select_format.c\
	  $(SRCPATH)ft_strlen.c\
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

