#include <iostream>
#include <fstream>
#include "Stash.h"
using namespace std;


int main() {

    ifstream file;
    struct Stash stash;
    double number;
    file.open("input.txt");

    stash.initialize(10);


    while (file >> number){

        //cout<<number <<" ";
        stash.add(&number);
    }
    
    file.close();

    //cout<< *(double*)stash.fetch(1);
    for(int i = 0; i <stash.count(); i++){
        cout<< *(double*)stash.fetch(i) <<"\n";
    }

    //stash.cleanup();
}