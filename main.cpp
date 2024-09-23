#include <iostream>
#include <vector>
#include "Person.h"
using namespace std;


int main() {

    Person one;
    Person two("Sue",52);
    vector<int> grades = {85, 92,77,99,80};

    one.printMe();
    two.printMe();
    two.hasBirthday();
    two.printMe();
   // two.setName("Mary");
    two.printMe();
    if (one.isMinor()){
        cout << "You are a minor" << endl;
    } else {
        cout<< "You are an adult"<< endl;
    }
    one.hasBirthday();
    if (one.isMinor()){
        cout << "You are a minor" << endl;
    } else {
        cout<< "You are an adult"<< endl;
    }

    cout << one;
    cout << two;
    



    return 0;
}
