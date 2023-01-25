#ifndef Circle_h
#define Circle_h

#include <iostream>
#include <math.h>

using namespace std;

class Circle {      

    private:

        double x=0,y=0,r;

    public:

        double area;

        Circle(){
            x=0;
            y=0;
            r=1;
            area = M_PI;
        }

        Circle(double x2, double y2, double r2){
            double x=x2;
            double y=y2;
            double r=r2;
        }
        
        void setX(double x2){
            x = x2;
        }
        void setY(double y2){
            y = y2;
        }
        void setR(double r2){
            r = r2;
        }

        double getX(){
            return x;
        }
        double getY(){
            return y;
        }
        double getR(){
            return r;
        }

        // void area(){
        // }

};

#endif