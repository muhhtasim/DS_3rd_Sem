
#include <iostream>
using namespace std;

void quickSort(int a[], int low, int high)
 {
    if (low < high)
        {
        int pivot = a[high]; //last
        int i = (low - 1); //track the boundary elm smm thn pivot

        for (int j = low; j < high; j++)
            {
            if (a[j] < pivot)
                {
                i++;
                swap(a[i], a[j]);
                }
            }
        swap(a[i + 1], a[high]);
        int pi = i + 1;

        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
        }
}

void printArray(int a[], int size) {
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
      int i,j,n;
    cout<<"Enter the range of array"<<endl;
    cin>>n;
     int* a = new int[n]; //dynamic
    cout<<"Enter the elements of array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quickSort(a, 0, n - 1);
    cout << "Sorted array: ";
    printArray(a, n);
    return 0;
}
