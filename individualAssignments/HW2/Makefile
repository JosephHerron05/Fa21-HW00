#Name Joseph Herron
#Makefile made on 2/26/2025 at 9 pm

CC = g++
CFLAGS = -g -Wall -Wextra
TARGET = phonebook

all: default

#Link the object files to create the executable 
default: main.o phonebook.o
	$(CC) main.o phonebook.o -o phonebook

#Compile phonebook.cpp to create phonebook.o
phonebook.o:phonebook.cpp phonebook.h
	$(CC) $(CFLAGS) -c phonebook.cpp

#Compile main.cpp to create main.o 
main.o: main.cpp phonebook.h
	$(CC) $(CFLAGS) -c main.cpp


#Clean up the object file and Executable
clean:
	$(RM) phonebook *.o *~
