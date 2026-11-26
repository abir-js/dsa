#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

int main() {
    Student *s1 = new Student("Alice", 20);
    cout << "Name: " << (*s1).name << ", Age: " << (*s1).age << endl;
    
    Student s2("Bob", 22);
    cout << "Name: " << s2.name << ", Age: " << s2.age << endl;


    delete s1; 
    return 0;
}