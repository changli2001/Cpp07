NAME = output
CC = c++
SRC = main.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS =  iter.hpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp	$(HEADERS)
	$(CC)  $(FLAGS)  -c $< -o $@

all: $(NAME)
	$(CC) $(FLAGS)  -o $(NAME) $(OBJ)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all