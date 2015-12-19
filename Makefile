CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

SRCPATH = ./srcs/

UTILSPATH = $(SRCPATH)/utils/
FORMATPATH = $(SRCPATH)/format/
PRINTPATH = $(SRCPATH)/print/

INCPATH =./includes

SRC = $(SRCPATH)ft_printf.c\
	  $(SRCPATH)ft_save_flags.c\
	  $(SRCPATH)ft_select_format.c\
	  $(SRCPATH)ft_struct_format.c\
	  $(FORMATPATH)ft_format_int.c\
	  $(FORMATPATH)ft_format_bit.c\
	  $(FORMATPATH)ft_format_ptr.c\
	  $(FORMATPATH)ft_format_str.c\
	  $(FORMATPATH)ft_format_hexa.c\
	  $(FORMATPATH)ft_format_byte.c\
	  $(PRINTPATH)ft_print_all.c\
	  $(PRINTPATH)ft_print_final.c\
	  $(PRINTPATH)ft_print_all_char.c\
	  $(PRINTPATH)ft_print_final_char.c\
	  $(UTILSPATH)tools_str.c\
	  $(UTILSPATH)tools_nbr.c\
	  $(UTILSPATH)tools_unicode.c\
	  $(UTILSPATH)ft_itoa_base.c\
	  $(UTILSPATH)ft_strlen.c\
	  $(UTILSPATH)ft_stradd_char.c\
	  $(UTILSPATH)ft_strdel.c\
	  $(UTILSPATH)ft_strcpy.c\
	  $(UTILSPATH)ft_strncpy.c\
	  $(UTILSPATH)ft_strjoin.c\
	  $(UTILSPATH)ft_strcmp.c\
	  $(UTILSPATH)ft_strdup.c\
	  $(UTILSPATH)ft_memalloc.c\
	  $(UTILSPATH)ft_atoi.c\
	  $(UTILSPATH)ft_memset.c\
	  $(UTILSPATH)ft_memcpy.c\
	  $(UTILSPATH)ft_memdel.c\
	  $(UTILSPATH)ft_strcat.c\
	  $(UTILSPATH)ft_isdigit.c

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

