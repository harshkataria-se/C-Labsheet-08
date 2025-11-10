#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person {
private:
    float marks;

public:
    void inputStudent() {
        inputPerson();  
        cout << "Enter marks: ";
        cin >> marks;
    }
    void displayStudent() {
        cout << "\n--- Student Details ---\n";
        displayPerson();  
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;
    s1.inputStudent();   
    s1.displayStudent(); 
    return 0;
}
