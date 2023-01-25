#include <iostream>
using namespace std;

int main() {

float test ; 
float input;
float mod;
int count = 0;
int countNumberOfMod = 0;

cout<< "Input a number: ";
cin>> input;
cout<<"\n";

cout << "Prime Numbers: ";
//factors by 1 and itself
// if all numbers 2-9 have mod > 0, then prime

for(int j = 1; j<=input;j++){
    countNumberOfMod = 0;
    count = 0;

    for (int i = 2; i<=9; i++){

        if(j !=i){
            test = j / i;
            mod = (int)j%i;
            //cout<<test <<" ";
            //cout<< mod<<"\n";
            countNumberOfMod++;

            if (mod!=0){
                count++;
            }

        }
        
    }
        //cout<< count <<" test";
        //cout<< countNumberOfMod;
        if(count==countNumberOfMod && j !=1){
            cout << j <<" ";
        }
        //cout<<"\n";
        //cout<<"\n";



}







//cout<< countNumberOfMod << "\n";
//cout<< count;

}