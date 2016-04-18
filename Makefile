CC = clang -Wall -Werror -Wextra

SRCPATH = ./srcs
INCPATH = ./includes

LIBFT = ./libft

HEADER = -I $(LIBFT)/includes -I $(INCPATH)

LIB = -L$(LIBFT) -lft

UTILSPATH = $(SRCPATH)/utils/
FORMATPATH = $(SRCPATH)/format/
PRINTPATH = $(SRCPATH)/print/

SRC = $(SRCPATH)/ft_printf.c\
	  $(SRCPATH)/ft_save_flags.c\
	  $(SRCPATH)/ft_select_format.c\
	  $(SRCPATH)/ft_struct_format.c\
	  $(FORMATPATH)/ft_format_int.c\
	  $(FORMATPATH)/ft_format_bit.c\
	  $(FORMATPATH)/ft_format_ptr.c\
	  $(FORMATPATH)/ft_format_str.c\
	  $(FORMATPATH)/ft_format_hexa.c\
	  $(FORMATPATH)/ft_format_byte.c\
	  $(PRINTPATH)/ft_print_all.c\
	  $(PRINTPATH)/ft_print_final.c\
	  $(PRINTPATH)/ft_print_all_char.c\
	  $(PRINTPATH)/ft_print_final_char.c\

OBJ = $(SRC:.c=.o)

NAME = libftprintf.a

all: $(NAME)

$(NAME) : $(OBJ)
	@make -C $(LIBFT)
	@ar -x $(LIBFT)/libft.a
	@ar rc $(NAME) $(OBJ) ./*.o
	@rm ./*.o __.SYMDEF*
	@ranlib $(NAME)

%.o: %.c
	@$(CC) $(HEADER) -o $@ -c $<
	@echo "\033[37m█\033[0m\c"

clean:
	@make -C $(LIBFT) clean
	@rm -rf $(OBJ)

fclean: clean
	@make -C $(LIBFT) fclean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re