NAME=AnimalSystem

OBJ = animal_system.o dog.o cat.o

all: $(NAME)

CC=g++
CXXFLAGS+=-g -Wall
LDLIBS+=-lstdc++

%.o: %.c
	@$(CC) -c -o $@ $<
	
$(NAME): $(OBJ)
	@$(CC) -o $@ $^

clean:
	@rm -rf $(NAME) *.o
