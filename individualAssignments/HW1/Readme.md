

	#Vector Class Implementation


	## Description:

	This assignment implements a single version of the vector class, which functions similarily to the 'std::vector' container but it's made from scratch.
	The vector stores integers and grows dynamically as more elements are added to it. '
	The class has methods for resizing, modifying,and accessing elements.




	#Files:
	- 'Vector.h':  Contains the first declaration.
	-'Vector.cpp': Contains the implementations of the class methods.  
	-'main.cpp': Contains the test code for how the vector class works.
	-'Makefile': Used for compiling and linking the files together.


	##Compilation
	To compile and test the program, usr the 'Makefile' by running:'make', and to test you run: './vector'
	To clean you run: 'make clean'


	##Test:
	1. Demonstrated the adding elements to the vector or using 'push_back' method by adding 1000 elements to the vector.
	2. Used the '[]' operator to modify and access elements by making the first element =  9999 and the last element to = 888.
	3. Tested the size method and only printed the first 10 elements.
	4. Tested the assignment operator '=' and copy constuctor.



	#Author:
	Joseph Herron
	02/04/2025