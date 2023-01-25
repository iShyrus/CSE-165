#include <iostream>
#include <fstream>
#include "Sortable.h"
using namespace std;


int main(){
    string word;
    string fileWord = "input1.txt";
    ifstream file(fileWord);
    vector<int> *vector1 =new Sortable;
    vector<string> vector2{};
    vector<string> vector3{};


    while(file >> word){

        cout<<word<<" ";
        vector1->push_back(word);
        
    }
    cout<<"\n";

    string fileWord2 = "input2.txt";
    ifstream file2(fileWord2);
    while(file2 >> word){
        cout<<word<<" ";
        vector2.push_back(word);
        
    }    
    cout<<"\n";


    string fileWord3 = "input3.txt";
    ifstream file3(fileWord3);
    while(file3 >> word){
        cout<<word<<" ";
        vector3.push_back(word);
        
    }
}