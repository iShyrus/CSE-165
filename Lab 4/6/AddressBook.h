#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H
#include <string>
#include <iostream>
#include "Entry.h"
#include <vector>
using namespace std;

	struct AddressBook {

        Entry entry;
        vector<string> firstName;
        vector<string> lastName;
        vector<string> mail;
        int count = 0;

        void add(Entry* entry){

            //cout<<entry->firstName;
            firstName.push_back(entry->firstName);
            lastName.push_back(entry->lastName);
            mail.push_back(entry->emailName);
            count++;
        }

        void print(){
            cout<<"\n";
            for(int i = 0; i < count; i++){
                cout<<"First Name: "<< firstName[i]<<"\n";
                cout<<"Last Name: "<< lastName[i]<<"\n";
                cout<<"Email: "<< mail[i]<<"\n";
                cout<<"\n";

            }
            

        }
    };


#endif