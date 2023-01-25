#include <iostream>
#include<vector>

using namespace std;

int main() {

    vector< vector<string>* > V;
    string input;
    vector<string> sameWord;
    vector<int> counting(10);

    cout<<"Input: " <<"\n";
    for(int i=0; i<10; i++){
        V.push_back(new vector<string>);
    }


    int count;
    while(input != "quit"){
        count=-1;
        cin >> input;
        sameWord.push_back(input);

        for(int i = 0; i<sameWord.size(); i++){
            if(sameWord[i] == input){
                count++;
            }
        }

        //cout<<count;
        
    
        if(input!="quit"){
            if(count < 1){
                int length = input.length();
                (*V[length]).push_back(input);
            }

        }


    }

    //cout<<(*V[4])[1];
    //cout<<V[4]->size();
    //cout<<V[3]->size();

    // if(0 < V[4]->size()){
    //     cout<<"TEST";
    // }

    cout<<"\n";
    cout<<"Output: "<<"\n";

    for(int i = 0; i<10; i++){

        // if(0<V[i]->size()){
        //     // cout<< i<<" ";
        // }
        for(int j = 0; j<V[i]->size(); j++){

            if(0<V[i]->size()){
                counting[i] +=1;
                //cout<< counting[i] <<" ";
            }

            else{
            }
        }

        // if(0<V[i]->size()){
        //     cout<<"\n";

        // }


    }

    for(int i = 0; i<10; i++){
        if(0<V[i]->size()){
             cout<< i*counting[i]<<" " << counting[i]<< "\n";
        }
        //cout<< i <<"\n";
            
    }






}