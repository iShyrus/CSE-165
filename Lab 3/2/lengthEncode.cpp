#include <iostream>
#include <vector>
using namespace std;

int main() {

vector <string> V;
string input;
int number = 0;
cout<<"Input: " <<"\n";

while(number!= -2){
    cin>> input;
    cin>> number;

    if(number== -1){
            V.push_back("\n");
            V.push_back("\n");

    }
    else{
        for(int i = 0; i<number; i++){
            V.push_back(input);
        }

    }


}

cout<< "Output: "<<"\n";
for(int i = 0; i<V.size(); i++){
    cout<< V[i];
}

cout<<"\n";
}
