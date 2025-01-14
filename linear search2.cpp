#include <iostream>
using namespace std;

int main() {
    int value, i, pos = -1, n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int num[n];

    cout << "Enter " << n << " elements of the array:\n";

    for (i = 0; i < n; i++) {
        cin >> num[i];
    }

    cout << "Enter the value you want to search for: ";
    cin >> value;

    for (i = 0; i < n; i++) {
        if (value == num[i]) {
            pos = i + 1;
            break;
        }
    }

    if (pos == -1) {
        cout << "Item not found.\n";
    } else {
        cout << "Item found at position " << pos << ".\n";
    }

    return 0;
}

