#include <iostream>
#include "struct.h"

using namespace std;

int main() {

    struct test1 test1;
    struct test2 test2;
    struct test3 test3;
    struct test4 test4;
    struct test5 test5;
    struct test6 test6;
    struct test7 test7;


	cout << sizeof(test1) << "\n";
	cout << sizeof(test2) << "\n";
	cout << sizeof(test3) << "\n";
	cout << sizeof(test4) << "\n";
	cout << sizeof(test5) << "\n";
	cout << sizeof(test6) << "\n";
	cout << sizeof(test7) << "\n";
	return 0;
}