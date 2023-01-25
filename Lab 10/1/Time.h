#ifndef Time_h
#define Time_h
#include <iostream>
using namespace std;


class Time {

public:
    int hours;
    int minutes;
    int seconds;

    Time(){
        hours=0;
        minutes=0;
        seconds=0;
    }

    Time(int hours, int minutes, int seconds){
        this->hours=hours;
        this->minutes=minutes;
        this->seconds=seconds; 
    }

    Time operator+(Time const &other){
        Time t;
        t.hours = hours + other.hours;
        t.minutes = minutes + other.minutes;
        t.seconds = seconds + other.seconds;

        if(t.minutes > 60){
            int tMin = t.minutes - 60;
            t.minutes = tMin;
            t.hours++;
        }

        if(t.seconds > 60){
            int tSec = t.seconds - 60;
            t.seconds = tSec;
            t.minutes++;
        }


        return t;

    }

    void print(){
        cout << hours << " hours, ";
        cout << minutes << " minutes, ";
        cout << seconds <<" seconds" <<endl;
    }
};

#endif