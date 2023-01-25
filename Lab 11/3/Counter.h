#ifndef COUNTER_HPP
#define COUNTER_HPP

#include <iostream>
using namespace std;

class Counter{
public:
    static int count;
    int ID;
    Counter()
    :ID(count++)
    {
        //cout << this->ID << " created\n";
    }
    ~Counter()
    {
        //cout << this->ID << " destroyed\n";
    }
    void* operator new(std::size_t sz)
    {
        cout << "new\n";
        void* mem = std::malloc(sz);
        return mem;
    }
    void operator delete(void* mem)
    {
        cout << "delete\n";
        free(mem);
    }
    void* operator new[](std::size_t sz)
    {   
        cout << "new " << (sz / sizeof(Counter)) - 2  << " starting at " << count << '\n';
        void* mem = std::malloc(sz);
        return mem;
    }
    void operator delete[](void* mem){
        cout << "delete counters\n";
        free(mem);
    }
};


#endif