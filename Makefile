CFLAGS = -Wall -Werror -Wextra -I ./
NAME = libftprintf.a
SRCPATH = ./srcs/
SRC = $(SRCPATH)ft_printf.c\
	  $(SRCPATH)tools_str.c\
	  $(SRCPATH)tools_nbr.c\
	  $(SRCPATH)tools_unicode.c\
	  $(SRCPATH)ft_itoa_base.c\
	  $(SRCPATH)ft_select_format.c\
	  $(SRCPATH)ft_format_byte.c\
	  $(SRCPATH)ft_format_char.c\
	  $(SRCPATH)ft_format_hexa.c\
	  $(SRCPATH)ft_format_hexaup.c\
	  $(SRCPATH)ft_format_int.c\
	  $(SRCPATH)ft_format_ptr.c\
	  $(SRCPATH)ft_format_str.c\
	  $(SRCPATH)ft_format_unicode.c\
	  $(SRCPATH)ft_format_uint.c\
	  $(SRCPATH)ft_format_percent.c\

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

