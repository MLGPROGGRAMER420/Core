CC = gcc
FLAGS = -Wall -Wextra -Werror
CCFLAGS = -I.#odwołanie się do lokalizacji biblioteki libft.h mówiąc nam o instrukcjach i funkcjach zawartych w tym pluku poniżej
NAME = libft#deklarowanie nazwy zmiennej naszego pliku (musi się pokrywać z plikami *.h)
ARNAME = ar rcs $(NAME)#archiwizacja wszystkich plików obiektowych ar - archiwizacja do pliku *.a czyli naszej biblioteki rcs - rekompilacja -create -static
COMPILE = $(CC) $(FLAGS)#suffix odnoszący się do cc i flags 
FILES = toupper#tutaj wypisujemy nasze funkcje ft_*.c wypisujemy to dzięki prefixowi i suffixowi
SOURCE = $(foreach file,$(FILES),ft_$(file).c)#W tej linijce tworzymy funckję która pozwala nam na wypisywanie tylko nazwy naszej funckji docelowej

OBJS := $(SOURCE:%.c=%.o)#--->>> jest to nasz while który dopisuje .o do wszystkich plików .c które podaliśmy powyżej jest to przepisanie 

all: $(NAME)#wywołuje naszego name który odwołuje się niżej do..

$(NAME):$(OBJS)#do.. w tym momencie tylko zmienia nazwe z .c na .o --->>>
	$(ARNAME).a $(OBJS)
#w tej funkcji ^^^ archiwizujemy nasz plik libft do rozszerzenia .a nie tylko zmieniając nazwę

%.o: %.c# % - czyli dowolne pliki z rozszerzeniem .o (jest to nasz target) .c (jest to nasze źródło) jest to reguła przypisana odgórnie
	$(COMPILE) $(CCFLAGS) -o $@ -c $<
#w pierwszej kolejności kompuluje z flagami dzięki naszemu suffixowi a nastepnie przypisuje nasze pliki .o do naszej zarchiwizowanej biblioteki
#$@  kompilacja pliku -c na -o
#$< to jest zmienna która odwołuje się do nazwy pliku .c dzięki czemu regóła odgórna %.o: %.c

clean:
	rm -f *.o
#jest to funkcja usuwająca pliki z rozszerzeniem .o  -f = odnosi się do force czyli funkcja wykonawcza administracyjna

fclean:
	rm -f $(NAME).a

re: fclean all