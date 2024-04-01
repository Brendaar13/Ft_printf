NAME = libftprintf.a

CC = cc
CCFLAGS = -Wall -Werror -Wextra

SRCs = 	ft_print_utils.c; \
	ft_base.c; 	  \
	ft_printf.c;	  \

OBJS = $(SRCs:.c=.o)

all: $(NAME)
	@echo "Todo OK!"

$(NAME): $(OBJS)
	@ar -crs $(NAME) $(OBJS)
	@ranlib $(NAME)

%.o : %.c
	@$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	@rm -f $(OBJS)
	@echo "Borrado todos los .o"

fclean: clean
	@$(RM) $(OBJS) $(NAME)
	@echo " Borrado todos los .o y $(NAME)"

re: fclean all
	@echo " Borrado todo y creado el $(NAME)"

.PHONY: norma test clean fclean re all
