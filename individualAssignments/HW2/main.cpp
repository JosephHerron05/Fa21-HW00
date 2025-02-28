
#include "phonebook.h" 
#include <iostream>

using namespace std;


void display_menu(){
  cout << " Welcome to the UTM Phonebook!  You may select one of the following options: " <<endl;
  cout << "1 Read a phonebook from a file " <<endl;
  cout << " 2 Write the phonebook to a file " <<endl;
  cout << " 3 Print the phonebook " <<endl;
  cout << " 4 Search for a user's phone number " <<endl;
  cout << " 5 Reverse lookup by phone number " <<endl;
  cout << " 6 Add a user " <<endl;
  cout << " 7 Delete a user " <<endl;
  cout << " 8 Exit this program " <<endl;

  cout << " Please enter your choice now: [user enters their choice here] ";
}
  int main() {
  PhoneBook phonebook;
  int choice;
  string first, last, phone, filename;

  while(true) {
    display_menu();
      cin >> choice;
    cin.ignore(); //handling newling issues

    switch(choice) {
	case 1:
	  cout << "Enter filemame to read from: " ;
	  phonebook.read_from_file(filename);
	  cout << "Phonebook is loaded successfully. \n" ;
	  break;


       case 2:
      cout << "Enter filename to save to: ";
      getline(cin, filename);
      phonebook.write_to_file(filename);
      cout << "Phonebook saved successfully. \n" ;
      break;


      case 3:
      phonebook.print();
      break;

      case 4:
      cout << "Enter phone number to search for: " ;
      getline(cin, last);
      cout << "Phone number: " << phonebook.lookup(first, last) << endl;
      break;

    case 5:
      cout << "Enter phone number to search for: " ;
      getline(cin, phone);
      cout << "Owner: " << phonebook.reverse_lookup(phone) << endl;
      break;


    case 6:
      cout << "Enter first name: ";
      getline( cin, first);
      cout << "Enter last name: " ;
      getline(cin, last);
      cout << "Enter phone number: ";
      getline(cin, phone);
      phonebook.insert_sorted(first, last, phone);
      cout <<" User added successfully. \n";
      break;


    case 7:
      cout << "Enter the last name of the user to delete: ";
      getline(cin, last);
      phonebook.delete_user(first, last);
      cout << "User is deleted succesfully (if found). \n" ;
      break;
    case 8:
      cout << "Exiting Program....... \n" ;
      return 0;

    default:
      cout << "Invalid choice. Please try again. \n" ;
    }
  }
  
	    
      
  
  return 0;
}
