#include <iostream>
#include <fstream>
using namespace std;


int main() {
    string word;
    string fileWord = "words.txt";
    ifstream file(fileWord);
    int count = 0;
    int letterCheck = 0;

    string wordToBeCounted;

    cout << "Enter the word to count the number of occurences of a word: ";
    cin >> wordToBeCounted;




    while(file >> word){
        letterCheck = 0;

        for(int i = 0; i<= word.length(); i++){
            char letter= word[i];
            if( 65 <= int(letter) && int(letter) <= 90){
                word[i] +=32;
            }
        }

        
        for(int i = 0; i<= wordToBeCounted.length(); i++){
            char letter= wordToBeCounted[i];
            if( 65 <= int(letter) && int(letter) <= 90){
                wordToBeCounted[i] +=32;
            }
        }



        for(int i = 0; i < wordToBeCounted.length(); i++){

            //cout<<word[i];
            if(word[i] == wordToBeCounted[i]){
                letterCheck++;

            }
            if(letterCheck ==wordToBeCounted.length()){
                count++;
            }
        

        }
        //cout<<letterCheck;

    }

    cout<<"The number of times the word '"<< wordToBeCounted <<"' appears: " << count;



}