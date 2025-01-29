/* Bubble sorting in array
    4th cls probably
    */

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int i,j,n;
    cout<<"Enter the range of array"<<endl;
    cin>>n;
     int* a = new int[n];
    cout<<"Enter the elements of array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The array is"<<endl;
     for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    // Start selection sort algorithm

    for (i = 0; i < n - 1; i++) {
        int mini = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[mini]) {
                mini= j;
            }
        }
        swap(a[i], a[mini]);
    }

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
