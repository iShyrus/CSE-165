#include <iostream>
using namespace std;

int main() {

    int input;
    int mod;

    cout<< "Input a number: ";

    cin>>input;
    if(input<0){
        cout<<"NEGATIVE\n";
    }
    else{
        cout<<"POSITIVE\n";
    }

    mod = input % 2;

    if(mod == 0){
        cout<< "EVEN\n";
    }
    else{
        cout<< "ODD\n";
    }


}