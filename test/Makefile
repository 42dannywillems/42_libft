NAME	=	test_libft

LIB		=	ft
LIB_DIR	=	../
FLAGS	=	-Wall -Wextra -Werror
INC		=	../includes

SRC		=	$(wildcard *.c)

all: $(NAME)

$(NAME): 
	gcc -I$(INC) $(FLAGS) $(SRC) -o $(NAME) -l$(LIB) -L$(LIB_DIR)

clean:
	rm -f $(NAME)

re: clean all
