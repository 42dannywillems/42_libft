NAME	=	test_libft

LIB		=	ft
LIB_DIR	=	../
FLAGS	=	-Wall -Wextra -Werror
INC		=	../includes
DEBUG	=

SRC		=	$(wildcard *.c)

all: $(NAME)

$(NAME): 
	gcc $(DEBUG) -I$(INC) $(FLAGS) $(SRC) -o $(NAME) -l$(LIB) -L$(LIB_DIR)

debug: DEBUG = -g

debug: $(NAME)

clean:
	rm -f $(NAME)

re: clean all
