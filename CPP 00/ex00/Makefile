NAME = megaphone
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = megaphone.cpp

OBJ = ${SRC:%.cpp=%.o}

all: ${NAME}

${NAME}:${OBJ}
		${CC} ${CXXFLAGS} ${OBJ} -o $(NAME)

fclean: clean
	@rm -rf ${NAME}

clean:
	@rm -rf ${OBJ}

re: fclean all