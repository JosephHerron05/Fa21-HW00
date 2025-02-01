/**
 * @file main.cpp
 * @author Joseph Herron
 * @date 2025-01-23
 * @brief should implement your main files, including the other files. 
 * 
 * bleh
 */

 
#include <iostream>
#include "vector.h"
using namespace std;

int main() {
    Vector vec; //creates a vector  
    

  cout<< "Adding element" <<endl;
  for(int i =0; i < 0; i++){
    vec.push_back(i); //this loop will add 10 elements
  }

  cout << "Vector Size: " << vec.size() <<endl; //will print 10 elements
  cout << "Vector Capacity: " << vec.capacity() <<endl; // should be at least 10 


  cout << "Accessing elements using operator[]: " <<endl;
  for(int i =0; i < vec.size(); i++){
    cout << "Element " << i << ": " << vec[i] << endl;
  }


  //For the copy constructor
  Vector vec_copy = vec;
  cout << "Copied vector test: " <<  vec_copy.size() <<endl;


  //Assignment operator test
  Vector vec_ass;
    vec_ass = vec;
  cout << "Assigned vec size: " << vec_ass.size() <<endl;
  return 0;
}
