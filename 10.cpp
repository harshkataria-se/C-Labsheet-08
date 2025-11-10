#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int roll_no;
    float marks;

public:
    void inputDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void displayDetails() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;  
    s1.inputDetails();   
    s1.displayDetails();
    return 0;
}
