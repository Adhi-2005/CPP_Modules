EXEC = ./FragTrap
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ = $(SRC:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXEC)

re: fclean all
