#include <iostream>
#include <vector>
using namespace std;

class Data{
    vector<int> vector;

    public:
        void add(int num){
            vector.push_back(num);
        }

        void print(){
            for(int i = 0; i<vector.size();i++){
                cout<<vector[i]<<" ";
            }
            cout<<"\n";
        }

        void sort(){
            int i;
            int key;
            int j;

            for (i = 1; i<vector.size(); i++){
                key = vector[i];
                j = i - 1;

                while(j>=0 && vector[j] > key){
                    vector[j+1] = vector[j];
                    j = j - 1;
                }
                vector[j+1] = key;
            }

        }


};

