NAME =	libftprintf.a
CC = cc # Flag for implicit rules
CFLAGS = -Wall -Wextra -Werror # Flag for implicit rules. Turn on debug info
AR = ar rcs
RM = rm -f
SRC = ft_printf \
	ft_putchar \
	ft_strchr \
	ft_memset \


SRCS = $(addsuffix .c, $(SRC))
OBJS = $(addsuffix .o, $(SRC))

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re