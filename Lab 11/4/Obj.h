#include <iostream>
using namespace std;
#include <string>
#include "Shared.h"

class Obj : public Shared {


	public:
		string n;
		Obj(string name) {
			n = name;
			cout << "New " <<  n << endl;
		}

		~Obj() {
			cout << "Delete " << n << endl;
		}
};