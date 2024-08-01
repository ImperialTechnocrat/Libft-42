# unittests/Makefile

UNITTEST_SRC = $(wildcard *.c)
UNITTEST_OBJ = $(UNITTEST_SRC:.c=.o)
UNITTEST_BIN = unittest_bin

# Path to the parent directory's libft.a
LIBFT_PATH = ../
LIBFT = $(LIBFT_PATH)libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ../include
AR = ar rcs
RM = rm -f

.PHONY: all clean fclean re

all: $(UNITTEST_BIN)

$(UNITTEST_BIN): $(UNITTEST_OBJ) $(LIBFT)
	$(CC) $(UNITTEST_OBJ) $(LIBFT) -o $(UNITTEST_BIN)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(UNITTEST_OBJ)

fclean: clean
	$(RM) $(UNITTEST_BIN)

re: fclean all

