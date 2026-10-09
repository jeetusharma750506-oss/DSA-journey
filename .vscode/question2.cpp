#include <iostream>
using namespace std;

int main() {
    int matrix[100][100];
    int rows, cols;
    int diagonalSum = 0, totalSum = 0;

    // 1. Input rows and columns
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    // Input matrix elements
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
            totalSum += matrix[i][j];
        }
    }

    // 2. Display original matrix
    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // 3. Display transpose
    cout << "\nTranspose Matrix:\n";
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // 4. Main diagonal sum
    if (rows == cols) {
        for (int i = 0; i < rows; i++) {
            diagonalSum += matrix[i][i];
        }

        cout << "\nMain Diagonal Sum: " << diagonalSum << endl;
    } else {
        cout << "\nMain Diagonal Sum: Not applicable (Matrix is not square)" << endl;
    }

    // 5. Total matrix sum
    cout << "Total Matrix Sum: " << totalSum << endl;

    return 0;
}