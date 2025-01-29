/* Insertion sorting in array
    4th cls probably
    */

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int i,n;
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

    // Start insertion sort algorithm

    for ( i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
