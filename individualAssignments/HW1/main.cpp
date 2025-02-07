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
    
    //push back test
    for(int i =0; i < 1000; i++){
       vec.push_back(i); //pushes 1000 ints
    }
    cout << "The vector size after adding 1000 elements is " << vec.size() <<endl;





    //modify[] test
    vec[0] = 9999; //first element in the arr
    vec[999] = 8888; //1000th element in the arr
    cout << "The first element is " << vec[0] <<" and the 100th element is " << vec[999] << endl;

    
    //test for using size() to control the bounds and only print the first ten elements 
     cout<< "Adding element" <<endl;
     for(int i = 0; i < vec.size() && i < 10 ; i++){
       cout<<vec[i] << "  "; //this loop will add 10 elements
  }
     cout <<endl;



     //assignment test
     Vector vec2;
     vec2 = vec; //assign vec to Vec2;
     cout << "The first element of Vec2 is: " << vec2[0] <<endl; 


     //Copy constrcutoor test
     Vector vec3 = vec; //copy constructor
     cout << "After copy constructor, the first element of vec3 is: " <<vec3[0] <<endl;
     
  return 0;
}
