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

    // Start bubble sort algorithm

   for(i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                   swap(a[j],a[j+1]);
                                     /* int temp = a[j];
                                       a[j] = a[j + 1];
                                        a[j + 1] = temp;
                                     */
            }
        }
    }

    // Another bubble sort algorithm

   /*     int counter = 1;
       while (counter < n)
       {
           for (int i = 0; i < n - counter; i++) {
            if (a[i] > a[i + 1]) {

                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        counter++;
       }
   */


    cout<<"\nAfter swaping"<<endl;
     for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
