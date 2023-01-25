#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int getBit(int n, int index){
    cout<<"Get bit at position "<<index<<": ";
    
    bitset< 5 > bset1 = n;

    cout<<bset1[index]<<"\n";

    return 0;
}
int setBit(int n, int index){
    cout<<"Binary representation after setting bit at position "<<index<<": ";
    
    bitset< 5 > bset1 = n;
    bset1.set(index,1);
    cout<<bset1 <<"\n";
    return 0;

}

int clearBit(int n, int index){
    cout<<"Binary representation after clearing bit at position "<<index<<": ";
    
    bitset< 5 > bset1 = n;
    bset1.set(index,0);
    cout<<bset1;
    return 0;

}

int main() {
    int number;
    int index;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Enter an index: ";
    cin>>index;

    bitset< 5 > bset1 = number;

    cout<<"Binary representation of "<< number<< ": "<< bset1 <<"\n";

    getBit(number, index);
    setBit(number, index);
    clearBit(number, index);

}



