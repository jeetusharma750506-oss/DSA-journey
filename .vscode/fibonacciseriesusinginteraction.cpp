#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the upper limit: ";
    cin >> n;

    int a = 0, b = 1;

    while (a <= n) {
        cout << a << " ";

        int next = a + b;
        a = b;
        b = next;
    }

    return 0;
}