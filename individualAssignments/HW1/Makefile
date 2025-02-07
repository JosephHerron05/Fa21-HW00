CC = g++                                                                        
CFLAGS = -g -Wall -Wextra                                                       

default: vector                                                                 

# Link the object files to create the executable
vector: main.o vector.o                                                         
	$(CC) $(CFLAGS) -o vector main.o vector.o                               

# Compile Vector.cpp to create Vector.o
vector.o: vector.cpp vector.h                                                
	$(CC) $(CFLAGS) -c vector.cpp                                           

# Compile main.cpp to create main.o
main.o: main.cpp vector.h                                                     
	$(CC) $(CFLAGS) -c main.cpp                                             

# Clean up the object files and executable
clean: 
	$(RM) vector *.o *~
