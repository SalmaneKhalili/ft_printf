NAME = libftprintf.a
CC = cc
INCLUDE = ft_printf.h
CFLAGS = -Wall -Wextra -Werror
SRC = ft_itoa.c ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putptr.c ft_putstr.c
OBJ = $(SRC:.c=.o)

all: $(NAME)
	
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o:%.c $(INCLUDE) 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean 
	$(RM) $(NAME) 

re: fclean all 

.PHONY: re all clean fclean
