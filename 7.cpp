#include <iostream>
using namespace std;
void addMatrix(int A[3][3], int B[3][3], int C[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int A[3][3], B[3][3], C[3][3];
    int rows = 3, cols = 3;

    cout << "Enter elements of first matrix (3x3):\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> A[i][j];

    cout << "\nEnter elements of second matrix (3x3):\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> B[i][j];
    addMatrix(A, B, C, rows, cols);

    cout << "\nSum of the two matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
