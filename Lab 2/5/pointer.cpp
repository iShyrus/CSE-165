#include <iostream>
using namespace std;

int main() {
    int number1;
    int number2;
    int multiply;
    int add;
    int subtract;
    int divide;


    cout<<"Enter a number: ";
    cin>> number1;
    cout<<"Enter a number: ";
    cin>> number2;

    int* p_number1 = &number1;
    int* p_number2 = &number2;

    multiply = *p_number1 * *p_number2;
    cout<<"Multiply: " << multiply <<"\n";

    divide = *p_number1 / *p_number2;
    cout<<"Divide: " << divide <<"\n";

    add = *p_number1 + *p_number2;
    cout<<"Add: " << add <<"\n";

    subtract = *p_number1 - *p_number2;
    cout<<"Subtract: " << subtract <<"\n";



}
