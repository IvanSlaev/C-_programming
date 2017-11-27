PROJ_NAME=FileSharing

export PROJ_DIR := $(shell readlink -e $(CURDIR))

OBJ_FILES = main.o file.o
OBJ+=$(addprefix src/,$(OBJ_FILES))

CC=g++
CXXFLAGS+=-g -Wall
LDLIBS+=-lstdc++
INCDIR+=$(PROJ_DIR)/inc/
LDFLAGS+=$(addprefix -I ,$(INCDIR))

all: $(PROJ_NAME)

%.o: %.cpp
	$(CC) -c $(LDFLAGS) -o $@ $<

$(PROJ_NAME): $(OBJ)
	$(CC) $(LDFLAGS) -o $@ $^

clean:
	@rm -rf $(PROJ_NAME)
	@find -iname "*.o" -delete
