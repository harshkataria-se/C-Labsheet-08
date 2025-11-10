#include <iostream>
using namespace std;
class Car {
private:
    string brand;
    float price;

public:
    void inputDetails() {
        cout << "Enter car brand: ";
        cin >> brand;
        cout << "Enter car price: ";
        cin >> price;
    }
    void displayDetails() {
        cout << "Brand: " << brand << ", Price: " << price << endl;
    }
};

int main() {
    Car c1, c2, c3;  
    cout << "Enter details for Car 1:\n";
    c1.inputDetails();
    cout << "\nEnter details for Car 2:\n";
    c2.inputDetails();
    cout << "\nEnter details for Car 3:\n";
    c3.inputDetails();
    cout << "\n--- Car Information ---\n";
    c1.displayDetails();
    c2.displayDetails();
    c3.displayDetails();

    return 0;
}
