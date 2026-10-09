
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    int temp = n;

    while (temp > 0) {
        sum = sum + temp % 10;
        temp = temp / 10;
    }

    if (sum % 9 == 0) {
        cout << "Divisible by 9";
    } else {
        cout << "Not divisible by 9";
    }

    return 0;
}