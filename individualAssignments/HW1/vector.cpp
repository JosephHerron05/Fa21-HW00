
/**
 * @file vector.cpp
 * @author Joseph Herron
 * @date 2025-01-23
 * @brief The method definitions for the vector class
 * 
 * bleh
 */

#include "vector.h"
#include <iostream>

using namespace std;

/**                                                                                                                                                                                                        
 * @file vector.cpp                                                                                                                                                                                        
 * @author Joseph Herron                                                                                                                                                                                   
 * @date 2025-01-28                                                                                                                                                                                        
 * @brief Constructor vector!!                                                                                                                                                                             
 *                                                                                                                                                                                                         
 * Initialize an empty  vector with no elements, size 0 and capacity 0. ALso set vec_ptr to nullptr because we don't have an array yet.                                                                    
 */

Vector::Vector(){
  vec_ptr = nullptr;
  vec_size = 0;
  vec_capacity = 0; 
}
/*
 *Copy constructor!!! creates a new vector and now I'll just need to allocate the new array with the same size and copy everything on over.
 */
 
Vector::Vector(const Vector& other) {
  vec_size = other.vec_size;
  vec_capacity = other.vec_capacity;
  vec_ptr = new int[vec_capacity]; // this will allocate new memory
    for(int i = 0; i < vec_size; i++)
      vec_ptr[i] = other.vec_ptr[i]; //copy the elements

}

/*
 *THIS Function was made to deallocate the memory that was allocated for the vector
 */
Vector::~Vector(){
  delete vec_ptr; // Free the dynamic allocated memory
  vec_ptr = nullptr;
  vec_size = 0;
  vec_capacity = 0;
}

/**
 *Assignment operator, This function allows us so assign one vector to the other 
 */
Vector& Vector::operator = (const(Vector& other)){
    if(this != &other){ //self assignment check 
      delete[] vec_ptr; //free memory 

      vec_size = other.vec_size;
      vec_capacity = other.vec_capacity;
      vec_ptr =  new int[vec_capacity]; //allocating the new memory

      for(int i =0 ; i < vec_size; i++){
	vec_ptr[i] = other.vec_ptr[i]; //copy elements
      }
    }
    return *this; //Return whatever the current object is
  }


  int Vector::size(){
    return vec_size; //returns the vector size
  }

  int Vector::capacity(){
    return vec_capacity; //returns the vector capacity
  }

  void(Vector::push_back( int element){
      if(vec_size) = vec_capacity){ //space check
      reserve(vec_capacity == 0? 1 : vec_capacity * 2); //Double the capacity 
    }
    vec_ptr[vec_size] = element; //adds the element aka pushback!!!
    ++vec_size; //increment of the size
    }


  void Vector::reserve(int n) {
    if(n > vec_capacity){ //reallocate if n is greater than the capacity
      int* new_ptr = new int[n];  //if is then allocate a new array
      for(int i =0; i < vec_size; i++){
	new_ptr[i] = vec_ptr[i]; //copy elements
      }
      delete[] vec_ptr; //free the old array
      vec_ptr = new_ptr;  // point to the new array
      vec_capacity = n; //update the capacity to n size
    }
  }


  int& Vector::operator[](unsigned int index){
    return vec_ptr[index]; //Retrun the elementat the given index
  
  }


   
