CC=cc
FLAGS=-Wall -Wextra -Werror -ansi -pedantic
LIB=libft
SRC=./SRC/ft_putchar.c
OBJ=./OBJ/ft_putchar.o
DONE=./Libft/libft.a

all:$(LIB)

libft : $(SRC)
	@$(CC) $(FLAGS) -c $(SRC)
	@mkdir ./OBJ
	@mv *.o ./OBJ
	@echo Tout est en ordre ... Création de la librairie et des dossiers !
	@ar -q libft.a $(OBJ)
	@mkdir ./Libft
	@mv ./libft.a ./Libft
	ranlib $(DONE)
	
re: fclean all

clean:
	@echo 		...Delete ...
	@rm -rf $(OBJ)
	@rm -rf ./OBJ
	@rm -rf ./header/libft.h.gch
	@echo 		...Done for OBJ !...

fclean: clean
	@rm -rf $(DONE)
	@rm -rf ./Libft/
	@echo 		...Done for lib !...
