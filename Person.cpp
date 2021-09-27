#include "Person.h"

Person::Person(){
    name = "";
    age = 0;
    this->luck = 1 + rand() % 10;
}

Person::Person(const string &name, int age) : Person(){
    this->name = name;
    this->age = age;
}

const string &Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}

int Person::getLuck() const {
    return luck;
}

void Person::setName(const string &name) {
    Person::name = name;
}

void Person::setAge(int age) {
    Person::age = age;
}

void Person::setLuck(int luck) {
    Person::luck = luck;
}

string Person::toString() const {
    string mess = "Name: " + getName() + "\n" + "Age: " + to_string(getAge()) + "\n" + "Luck: " + to_string(getLuck()) + "\n";
    return mess;
}
