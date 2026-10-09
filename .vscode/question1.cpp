#include <iostream>
using namespace std;

int main() {
    int arr[100], n, i;
    int element, position, key;

    // 1. Accept n elements
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display original array
    cout << "\nOriginal Array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // 2. Insert element
    cout << "\n\nEnter element to insert: ";
    cin >> element;

    cout << "Enter position for insertion (1 to " << n + 1 << "): ";
    cin >> position;

    if (position >= 1 && position <= n + 1) {
        // Shift elements to right
        for (i = n; i >= position; i--) {
            arr[i] = arr[i - 1];
        }

        arr[position - 1] = element;
        n++;

        cout << "Array after insertion: ";
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    } 
    else {
        cout << "Invalid insertion position!";
    }

    // 3. Delete element
    cout << "\n\nEnter position for deletion (1 to " << n << "): ";
    cin >> position;

    if (position >= 1 && position <= n) {
        // Shift elements to left
        for (i = position - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--;

        cout << "Array after deletion: ";
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    } 
    else {
        cout << "Invalid deletion position!";
    }

    // 4. Linear Search
    cout << "\n\nEnter element to search: ";
    cin >> key;

    int found = -1;

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i + 1;   // 1-based position
            break;
        }
    }

    if (found != -1) {
        cout << "Element found at position: " << found;
    } 
    else {
        cout << "Element not found!";
    }

    // 5. Final array
    cout << "\n\nFinal Array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}