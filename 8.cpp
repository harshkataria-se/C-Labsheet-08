#include <iostream>
using namespace std;
int sumOfDiagonal(int A[3][3], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += A[i][i];  
    }

    return sum;
}

int main() {
    int A[3][3];
    int n = 3;

    cout << "Enter elements of a 3x3 matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    int result = sumOfDiagonal(A, n);

    cout << "\nSum of diagonal elements: " << result;

    return 0;
}
