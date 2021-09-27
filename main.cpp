#include <iostream>
#include <vector>
#include "Person.cpp"

static void changeLuck(Person &p1, Person &p2){
    int temp = p1.getLuck();
    p1.setLuck(p2.getLuck());
    p2.setLuck(temp);
}

static int findLuckiest(vector<Person> &people){
    int maxLuck = -1;
    int index = 0;
    for ( int i = 0; i < people.size(); i++ ){
        if(maxLuck <= people.at(i).getLuck()){
            maxLuck = people.at(i).getLuck();
            index = i;
        }
    }
    return index;
}

int main() {
    Person p1("Salem", 22);
    Person p2("Adam", 21);
    Person p3("Messi", 23);
    Person p4("Salah", 24);
    Person p5("Max", 27);
    vector<Person> people {p1, p2, p3, p4, p5};
    cout << "\n\nThe luckiest person is: \n" << people.at(findLuckiest(people)).toString();
    cout << "Before changeLuck\n\n";
    cout << p1.toString() << endl << p4.toString() << endl;
    changeLuck(p1, p4);
    cout << "After changeLuck\n\n";
    cout << p1.toString() << endl << p4.toString() << endl;

    auto *persona6 = new Person();

    delete persona6;

    return 0;
}
