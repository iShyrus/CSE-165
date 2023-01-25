#include <iostream>
#include <fstream>
using namespace std;


int main() {
    string word;
    string fileWord = "words.txt";
    ifstream file(fileWord);
    int count = -1;

    while(file >> word){

        cout<<word<<" ";
        count++;
        
    }

    

    cout<< endl << "The amount of spaces: " << count;
}