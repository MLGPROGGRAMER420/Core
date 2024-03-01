CC = gcc
FLAGS = -Wall -Wextra -Werror
CCFLAGS = -I.
NAME = libft
ARNAME = ar rcs $(NAME)
COMPILE = $(CC) $(FLAGS)
SOURCE = $(addsuffix .c, ft_toupper)
OBJS := $(SOURCE:%.c=%.o)

all: $(NAME)

$(NAME):$(OBJS)
	$(ARNAME).a $(OBJS)

%.o: %.c
	$(COMPILE) $(CCFLAGS) -o $@ -c $<

clean:
	rm -f *.o

fclean:
	rm -f $(NAME).a

re: fclean all