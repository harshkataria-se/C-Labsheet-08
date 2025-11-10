#include <iostream>
using namespace std;
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
};
int main() {
    Calculator calc;
    int intSum = calc.add(5, 10);          
    double doubleSum = calc.add(4.5, 3.2); 
    cout << "Sum of integers: " << intSum << endl;
    cout << "Sum of doubles: " << doubleSum << endl;
    return 0;
}
