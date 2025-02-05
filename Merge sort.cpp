/* merge sorting in array
    6th cls probably
    */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the range of array: ";
    cin >> n;

    int* a = new int[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Before sorting: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    int* temp = new int[n];

    for (int size = 1; size < n; size *= 2) {
        for (int left = 0; left < n - size; left += 2 * size) {
            int mid = left + size - 1;
            int right = min(left + 2 * size - 1, n - 1);

            int i = left, j = mid + 1, k = left;

            while (i <= mid && j <= right) {
                if (a[i] < a[j])
                    temp[k++] = a[i++];
                else
                    temp[k++] = a[j++];
            }
            while (i <= mid) temp[k++] = a[i++];
            while (j <= right) temp[k++] = a[j++];

            for (int m = left; m <= right; m++)
                a[m] = temp[m];
        }
    }

    cout << "After sorting: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    delete[] a;
    delete[] temp;

    return 0;
}

