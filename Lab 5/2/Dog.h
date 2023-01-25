#ifndef DOG_h
#define DOG_h
#include <iostream>
#include <string>
#include "Animal.h"


class Dog : public Animal{

    public:
    Dog(){
        cout<<"Creating Dog \n";
        setName("");
        setAge(0);
    }
    Dog(string name, int age){
        cout << "Creating Dog\n";
        setName(name);
        setAge(age);
    }
    ~Dog(){
        cout<<"Deleting Dog\n";
    }
    void feed(){
        cout<<"A small bone, please!!";
    }
};

#endif

