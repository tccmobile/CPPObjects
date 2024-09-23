//
// Created by William Smith on 9/16/24.
//

#ifndef CPPOBJECTS_PERSON_H
#define CPPOBJECTS_PERSON_H
#include <string>
#include <ostream>

using namespace std;

class Person {
private:
    string name;
    int age;
    long ssn;
public:
    Person();
    Person(string, int);
    void setName(string);
    string getName();
    void setAge(int);
    int getAge();
    void printMe();
    void hasBirthday();
    bool isMinor();
    long getSSN() const;
    void setSSN(long ssn);
    friend ostream &operator<<(ostream &os, const vector<int>&);

    friend ostream &operator<<(ostream &os, const Person &person);
};


#endif //CPPOBJECTS_PERSON_H
