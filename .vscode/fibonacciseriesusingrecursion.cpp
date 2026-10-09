#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacci(int n, int index) {
    int value = fibonacci(index);

    if (value > n)
        return;

    cout << value << " ";

    printFibonacci(n, index + 1);
}

int main() {
    int n;

    cout << "Enter the upper limit: ";
    cin >> n;

    printFibonacci(n, 0);

    return 0;
}