#ifndef COUNTER_HPP
#define COUNTER_HPP

#include <iostream>
using namespace std;

class Counter{
public:
    static int count;
    int ID;
    Counter():ID(count++)
    {

        cout << this->ID << " created\n";

    }
    ~Counter()
    {
        
        cout << this->ID << " destroyed\n";

    }
    
};

#endif