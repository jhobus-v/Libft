NAME= libft.a

SOURCE= ft_bzero.c ft_isalnum.c ft_isalpha ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memset.c ft_strlen.c ft_memmove.c ft_strlcpy.c

CC= cc

FLAGZINHA= -Wall -Wextra -Werror

OBJ= (SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
