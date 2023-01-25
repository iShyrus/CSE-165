#include <iostream>
#include <fstream>
#include "Stash.h"
using namespace std;


int main() {


    struct Stash stash;
    int size;
    string input;
    double number;
    cin>>number;

    stash.initialize(size);

    while(input!="&"){

        cin>> input;
        cin>> number;

        if(input!="&"){
            stash.add(&number);

        }
    }

    for(int i = 0; i <stash.count(); i++){
        cout<< *(double*)stash.fetch(i) <<"\n";
    }
}