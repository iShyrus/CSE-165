#include <iostream>
#include<vector>

using namespace std;

int main() {

    vector<string> words;
    vector<string> sameThree;
    string input;
    string check;
    string store;
    int count;
    
    cout<<"Input: "<< "\n";
    while(input != "quit"){
    
        cin>>input;

        if(input!="quit"){
            if(4<=input.length()){
                words.push_back(input);
            }
            else{
                check = input;
            }        
        }



    
    }
    cout<<"\n";


    for(int i = 0; i<words.size(); i++){
        count=0;
        store = words[i];

        for(int i = 0; i<= store.length(); i++){
            char letter= store[i];
            if( 65 <= int(letter) && int(letter) <= 90){
                store[i] +=32;
            }
        }
        for(int i = 0; i<= check.length(); i++){
            char letter= check[i];
            if( 65 <= int(letter) && int(letter) <= 90){
                check[i] +=32;
            }
        }

        for(int j = 0; j<=check.length(); j++){
            if (check[j]==store[j]){
                count++;
            }

        }

        if(count==3){
            sameThree.push_back(words[i]);
        }

    }


    cout<<"Output: "<< "\n";
    for(int i = 0; i < sameThree.size(); i++){
        cout<<sameThree[i] << " ";
    }
    //cout<<check;
    cout<<"\n";
}