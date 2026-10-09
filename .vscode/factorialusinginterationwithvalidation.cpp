#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;

    cout << "Enter an integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative integers.";
    }
    else {
        for (int i = 1; i <= n; i++) {
            factorial = factorial * i;
        }

        cout << "Factorial of " << n << " = " << factorial;
    }

    return 0;
}