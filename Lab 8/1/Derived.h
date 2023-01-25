#include <iostream>
using namespace std;
#include "ADT.h"

class Derived : public ADT {
	public:


	void doSomething() {
		cout << "I did something" << endl;	
	}



	void doSomethingElse() {
		cout << "I did something else" << endl;
	}
	void dontDoThis() {
}

};