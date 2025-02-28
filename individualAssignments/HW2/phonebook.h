#ifndef PHONEBOOK_H
#define PHONEBOOK_H


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Entry{
  string first_name;
  string last_name;
  string phone_number;

  Entry* next;

  //Constructor
  Entry(const string& f, const string& l, const string& p) : first_name(f), last_name(p), phone_number(p), next(nullptr){}
};

  class PhoneBook{
  private:
    Entry* head; //head of the linked list


  public:
    //constructor and deconstructor
    PhoneBook();
    ~PhoneBook();

    //core linked list operators
    void push_front(const string& first, const string& last, const string& phone);
    void push_back(const string& first, const string& last, const string& phone);
    void insert_sorted(const string& first, const string& last, const string& phone);
    void delete_user(const string& first, const string& last);


    //File input and output
    void read_from_file(const string& filename);
    void write_to_file(const string& filename) const;

    //searching methods
    string lookup(const string& first, const string& last) const;
    string reverse_lookup(const string& phone) const;


    //to display the phonebook
    void print() const;
  };

#endif
  //PHONEBOOK_H
