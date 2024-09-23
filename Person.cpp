//
// Created by William Smith on 9/16/24.
//

#include "Person.h"
#include <iostream>
#include <vector>
using namespace std;

bool Person::isMinor() {
    return (age < 18);
}

void Person::hasBirthday() {
    age++;
}

void Person::printMe() {
    cout << name <<"\'s age is "<<age<<endl;
}

Person::Person(){
    name = "unknown";
    age = 17;
}

Person::Person(string newName, int newAge){
    name = newName;
    age = newAge;
}

void Person::setAge(int newAge) {
    age = newAge;
}

void Person::setName(string newName) {
    name = newName;
}

string Person::getName() {
    return name;
}

int Person::getAge() {
    return age;
}

long Person::getSSN() const {
    return ssn;
}

void Person::setSSN(long ssn) {
    Person::ssn = ssn;
}

ostream &operator<<(ostream &os, const Person &person) {
    os << "name: " << person.name << " age: " << person.age << " ssn: " << person.ssn;
    return os;
}
ostream &operator<<(ostream &os,const vector<int> &myGrades) {
    for (int i = 0; i < myGrades.size(); i++){
        os << myGrades.at(i) << endl;
    }
    return os;
}
