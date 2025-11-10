#include <iostream>
using namespace std;
void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "\nBefore swapping: num1 = " << num1 << ", num2 = " << num2;
    swapNumbers(num1, num2);
    cout << "\nAfter swapping:  num1 = " << num1 << ", num2 = " << num2;
    return 0;
}
