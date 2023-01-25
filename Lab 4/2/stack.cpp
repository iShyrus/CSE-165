#include <iostream>
#include <fstream>
#include "Stack.h"
using namespace std;


int main() {

    ifstream file;
    struct Stack stack;
    double number;
    file.open("input.txt");
    stack.initialize();
    int count;


    while (file >> number){
        //cout<<number <<" ";
        stack.push(new double (number));
        count++;
    }

    auto test=stack.head;

    for(int i = 0; i<count; i++){
		cout <<  *((double*)test->data) << "\n";
        test = test->next;

    }
        
    //cout << *(double*)stack.peek() <<" ";

    file.close();

    for(int i = 0; i<count; i++){

        stack.pop();

    }	    
    stack.cleanup();



}