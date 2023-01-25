#include <iostream>

using namespace std;

class Fib {

    public:

        static int secondLast;
        static int last;

        Fib(){

        }

        int next(){
            int n = secondLast + last;
            secondLast = last;
            last = n;
            return last;
        }
        
        int next(bool val){
            
            if(val){
                secondLast = 0;
                last = 1;
                return last;
            }
        }
        
};


