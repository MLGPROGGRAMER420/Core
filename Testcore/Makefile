CC = gcc
FLAGS = -Wall -Wextra -Werror
TARGET = libft
SOURCES = $(wildcard *.c)

all:
	$(CC) -c $(FLAGS) $(SOURCES)
	ar -rc $(TARGET).a *.o
clean:
	rm -f $(TARGET) *.o
