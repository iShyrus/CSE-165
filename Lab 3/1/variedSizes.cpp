#include <iostream>
#include <vector>

using namespace std;

int main() {

string wordCheck;
string letterCheck;
string input;
string oneLetter;
vector<string> words;


cout<< "Input: " <<"\n";

while(input !="quit"){
    cin>> input;

    if(input.length()==1){
        oneLetter = input;
        char letter= oneLetter[0];
        if( 65 <= int(letter) && int(letter) <= 90){
            oneLetter[0] +=32;
        }
    }
    
    else{
        words.push_back(input);
    }

}

cout<<"\n"<< "Output: " <<"\n";

for(int i = 0; i <= words.size()-1; i++){

    wordCheck = words[i];   

    char letter= wordCheck[0];
    if( 65 <= int(letter) && int(letter) <= 90){
        wordCheck[0] +=32;
    }


    letterCheck=wordCheck[0];

    if (letterCheck == oneLetter){
        cout<< words[i] << "\n";
    }




}





    // for(int i = 0; i<= word.length(); i++){
    //     char letter= word[i];
    //     if( 65 <= int(letter) && int(letter) <= 90){
    //         word[i] +=32;
    //     }
    // }



}
