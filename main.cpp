#include <iostream>
#include <vector>
#include "Person.h"
using namespace std;


int main() {

    Person *one = new Person();
    Person *two = new Person("Sue",52);

    cout<<"I have "<<Person::getInventory()<<" persons"<<endl;
    Person *three = new Person("Carl", 42);
    cout<<"I have "<<Person::getInventory()<<" persons"<<endl;

    cout << *one <<endl;
    cout << *two << endl;
    two->hasBirthday();
    cout << *two << endl;
   // two.setName("Mary");
    cout << *two <<endl;
    if (one->isMinor()){
        cout << "You are a minor" << endl;
    } else {
        cout<< "You are an adult"<< endl;
    }
    one->hasBirthday();
    if (one->isMinor()){
        cout << "You are a minor" << endl;
    } else {
        cout<< "You are an adult"<< endl;
    }



    delete one;
    cout<<"I have "<<Person::getInventory()<<" persons"<<endl;

    delete two;
    cout<<"I have "<<Person::getInventory()<<" persons"<<endl;

    delete three;
    cout<<"I have "<<Person::getInventory()<<" persons"<<endl;



    return 0;
}
