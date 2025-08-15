CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp ./../ex00/Animal.cpp ./../ex00/Dog.cpp ./../ex00/Cat.cpp ./../ex00/WrongAnimal.cpp ./../ex00/WrongCat.cpp Brain.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = brainAnimal

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

fclean: clean
	rm -f $(TARGET)
re: clean all