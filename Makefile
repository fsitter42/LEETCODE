NAME = leetcode
HEADER = leetcode.h
SOURCE = remove_elements.c
OBJECTS = $(SOURCE:.c=.o)
RM = rm -rf
CC = cc

%.o: %.c
	$(CC) -c $< -o $@

$(NAME): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

a:
	cc *.c -g

.PHONY: all clean fclean re
