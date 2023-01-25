#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {

    int input =-1; 
    int add =0;
    
    vector<int> numbers;
    vector<int> negative;

    cout << "Input: " <<"\n";


    while(input != 0){
        cin >> input;
        add+=input;
        //cout<<add;
        if(input>0){
            numbers.push_back(input);
        }
        if(input<0){
            negative.push_back(input);
        }
        
    }


    cout << "Output: ";

    // for(int i = 0; i < numbers.size(); i++){
    //     cout << numbers[i]<<" ";
    // }


    // for(int i = 0; i < negative.size(); i++){
    //     cout << negative[i]<<" ";
    // }



    for(int i = 0; i < negative.size(); i++){
        for(int j = 0; j <numbers.size(); j++){
            if(abs(negative[i]) == numbers[j]){

                //cout<<numbers[j];
                numbers.erase(numbers.begin()+j);
            }

        }
    }

    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i]<<" ";
    }
    cout<< add;

    cout<<"\n";


}
