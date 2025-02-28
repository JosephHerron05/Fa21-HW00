#include "phonebook.h"
#include <iomanip>
using namespace std;

PhoneBook::PhoneBook() : head(nullptr){}

PhoneBook:: ~PhoneBook(){
  Entry* current = head;
  while(current){
    Entry* temp = current;
    current = current-> next;
    delete temp;
  }
}

void PhoneBook::push_front(const string& first, const string& last,const string& phone){
  Entry* new_entry = new Entry(first, last, phone);
  new_entry -> next = head;
  head = new_entry;
}


void PhoneBook::push_back( const string& first, const string& last, const string& phone){
  Entry* new_entry = new Entry(first, last, phone);
  if(!head){
    head = new_entry;
    return;
  }


  Entry* current = head;
  while( current -> next) {
    current = current -> next;
  }
  current -> next = new_entry;
}


void PhoneBook::insert_sorted(const string& first, const string& last, const string& phone){
  Entry* new_entry = new Entry(first, last, phone);
  if(!head|| last < head -> last_name){
    new_entry -> next = head;
    head = new_entry;
      return;
  }

  Entry* current = head;
  while(current -> next && current -> next -> last_name < last){
    current = current -> next;
  }

  new_entry -> next = current -> next;
  current -> next = new_entry;
}


void PhoneBook::delete_user(const string& first, const string& last){
  if(!head) return;

  if(head->last_name == last) {
    Entry* temp = head;
    head = head -> next;
    delete temp;
    return;
  }


  Entry* current = head;
  while (current -> next && current -> next -> last_name != last){
    current = current -> next;
  }


  if(current -> next) {
    Entry* temp= current -> next;
    current -> next = temp -> next;
    delete temp;
  }
}
  

string PhoneBook::lookup(const string& first, const string& last)const {
  Entry* current = head;
  while(current) {
    if( current -> last_name == last) {
      return current -> phone_number;
    }
    current = current -> next;
  }
  return "Not Found";

}
  
string PhoneBook::reverse_lookup(const string& phone) const {
    Entry* current = head;
    while (current) {
      if(current -> phone_number == phone) {
	return current -> first_name + " " + current -> last_name;
	  }
      current = current -> next;
    }
    return "Not Found";
  }

void PhoneBook::print() const {
  Entry* current = head;
  if(!current) {
    cout << "Phonebook is empty. " << endl;
    return;
  }

  cout << "Phonebook Entries: \n";
  while (current) {
    cout << current -> first_name << " " << current-> last_name << current -> phone_number <<endl;
    current = current -> next;
  }
}


void PhoneBook :: read_from_file(const string& filename) {
  ifstream file(filename);
  file.open(filename);
  if(!file){
    cerr << "Error opening the file: " << filename <<endl;
    return;
  }

  string first, last, phone;
  while( file >> first >> last >> phone) {
    insert_sorted(first, last, phone);
  }
  file.close();
}


void PhoneBook::write_to_file(const string& filename) const {
  ofstream file(filename);
  file.open(filename);
  if(!file) {
    cerr << "Error opening the file for writing: " << filename <<endl;
    return;
  }

  Entry* current = head;
  while (current) {
    file << current -> first_name << " " <<  current -> last_name << "\n" << current -> phone_number << "\n";
    current = current -> next;

  }
  file.close();
}
