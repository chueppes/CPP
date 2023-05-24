NAME = Animal

CC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = sources/Animal.cpp  main.cpp sources/Cat.cpp sources/Dog.cpp \
		sources/WrongCat.cpp sources/WrongAnimal.cpp

all: $(NAME)

OBJS        = ${SRCS:.cpp=.o}

.cpp.o:
		${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(FILES) -o $(OBJS) $@

clean:
		rm -f *.o 

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean

