CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99
LDFLAGS = 

TARGET = s21_grep

all: clean $(TARGET)

$(TARGET): s21_grep.o
	$(CC) $(LDFLAGS) -o $(TARGET) s21_grep.o

s21_grep.o: s21_grep.c s21_grep.h
	$(CC) $(CFLAGS) -c s21_grep.c

clean:
	rm -f $(TARGET) *.o

.PHONY: all clean