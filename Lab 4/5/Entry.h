#ifndef ENTRY_H
#define ENTRY_H
#include <string>
#include <iostream>
using namespace std;

	struct Entry {
		string firstName;
		string lastName;
		string emailName;

		void setName(string name) {
			firstName = name;
		}
		
		void setLastname(string name) {
			lastName = name;
		}
		void setEmail(string email) {
			emailName = email;
		}
		void print() {
			cout << "First Name: " << firstName << endl;
			cout << "Last Name: " << lastName << endl;
			cout << "Email: " << emailName << endl;
		}

		
	};


#endif