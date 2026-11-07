NAME = libftprintf.a
CC = cc
INCLUDE = ft_printf.h
CFLAGS = -Wall -Wextra -Werror
SRC = ft_ltoa.c ft_printf.c ft_putchr.c ft_puthex.c ft_putnmbr.c ft_putptr.c ft_putstri.c
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
.SECONDARY: $(OBJ)
