NAME = ScavTrap

CC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = ClapTrap.cpp  main.cpp ScavTrap.cpp FragTrap.cpp

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

