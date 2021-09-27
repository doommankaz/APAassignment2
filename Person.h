#include <string>
using namespace std;

class Person {
public:
    Person();
    Person(const string &name, int age);
    const string &getName() const;
    int getAge() const;
    int getLuck() const;
    void setName(const string &name);
    void setAge(int age);
    void setLuck(int luck);
    string toString() const;



private:
    string name;
    int age;
    int luck;
};
