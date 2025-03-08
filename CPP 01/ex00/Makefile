# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adshafee <adshafee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/08 09:16:40 by adshafee          #+#    #+#              #
#    Updated: 2025/03/08 09:16:41 by adshafee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ZombieAhead
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRC = main.cpp NewZombie.cpp RandomChump.cpp Zombie.cpp

OBJ = ${SRC:%.cpp=%.o}

all: ${NAME}

${NAME}:${OBJ}
		${CC} ${CXXFLAGS} ${OBJ} -o $(NAME)

fclean: clean
	@rm -rf ${NAME}

clean:
	@rm -rf ${OBJ}

re: fclean all