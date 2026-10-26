NAME = libft.a

SRCS = ft_isalnum.c ft_memset.c ft_bzero.c ft_isalpha.c 
ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c 
ft_memcpy.c ft_memmove.c ft_toupper.c ft_tolower.c 

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

ifeq ($(OS),Windows_NT)
    RM = del /f /q
endif

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	-$(RM) $(OBJS)

fclean: clean
	-$(RM) $(NAME)

re: fclean all