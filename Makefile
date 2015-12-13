CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
SRCPATH = ./srcs/
STRPATH = $(SRCPATH)/str/
INCPATH =./includes
SRC = $(SRCPATH)ft_printf.c\
	  $(SRCPATH)tools_str.c\
	  $(SRCPATH)tools_nbr.c\
	  $(SRCPATH)tools_unicode.c\
	  $(SRCPATH)ft_itoa_base.c\
	  $(SRCPATH)ft_select_format.c\
	  $(SRCPATH)ft_format_byte.c\
	  $(SRCPATH)ft_format_hexa.c\
	  $(SRCPATH)ft_format_int.c\
	  $(SRCPATH)ft_format_ptr.c\
	  $(SRCPATH)ft_format_str.c\
	  $(SRCPATH)ft_format_unicode.c\
	  $(SRCPATH)ft_format_uint.c\
	  $(SRCPATH)ft_format_percent.c\
	  $(STRPATH)ft_strlen.c\
	  $(STRPATH)ft_stradd_char.c\
	  $(STRPATH)ft_strdel.c\
	  $(STRPATH)ft_strcpy.c\
	  $(STRPATH)ft_strncpy.c\
	  $(STRPATH)ft_strjoin.c\
	  $(STRPATH)ft_strdup.c\
	  $(SRCPATH)ft_memalloc.c\
	  $(SRCPATH)ft_atoi.c\
	  $(SRCPATH)ft_memset.c\
	  $(SRCPATH)ft_memcpy.c\
	  $(SRCPATH)ft_memdel.c\
	  $(SRCPATH)ft_strcat.c\
	  $(SRCPATH)ft_isdigit.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $^
	ranlib $(NAME)

%.o: %.c
	gcc -I$(INCPATH) -o $@ -c $< $(CFLAGS)

clean:
	@rm -rf $(OBJ)

fclean: clean mrproper

re: fclean all

.PHONY: clean mrproper

mrproper: clean
	@rm -rf $(NAME)

