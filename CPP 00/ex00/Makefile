NAME = megaphone
CXXFLAGS = C++
SRC = megaphone.cpp

OBJ = ${SRC:%.cpp=%.0}

all; ${NAME}
	${CC} ${CXXFLAGS} ${OBJ} -o ${NAME}

fclean: clean
	@rm -rf ${NAME}

clean: @rm -rf ${OBJ}

re: fclean all