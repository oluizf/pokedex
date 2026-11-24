CC = gcc
CFLAGS = -Wall -Wextra -g -Iinclude

SRC = src/*.c
TARGET = pokedex

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
