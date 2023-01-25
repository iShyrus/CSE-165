#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

int number;

while(number!=-1){
    cout<<"Enter a number: ";
    cin>>number;

    bitset< 8 > bset1 = number;
    
    if(number!=-1){
        cout << "This is the hexidecimal format: " << hex << number << "\n" ;
        cout << "This is the binary format: " << bset1 << "\n" ;
        cout << "\n";
    }

}

}
