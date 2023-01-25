#include <iostream>
#include <string>
#include <vector>
#include "Dog.h"
#include "display.h"
using namespace std;

int main(){
	vector<Animal*> v;
    int age;

	int number;
	char animal;
	string name;
	cin >> number;

    for(int i = 0; i<number;i++){
        cin >> animal;
        cin >> name;
        cin >> age;
        if(animal =='A'){
            Animal *animal = new Animal();
            animal->setName(name);
            animal->setAge(age);
            v.push_back(animal);
        }
        else if( animal =='D'){
            Dog *dog = new Dog(name, age);
            dog->setName(name);
            dog->setAge(age);
            v.push_back(dog);
        }
    }

display(v);




	return 0;
}