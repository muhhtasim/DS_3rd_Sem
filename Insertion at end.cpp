/* add array in end position
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main ()
{
    int i,n,labib;
     cout<<"Enter the rang of array\n";
   cin>>n;
 int a[n+1];
    cout<<"Enter the elements of array\n";
    for (i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout<<"Enter the value\n";
    cin>>labib;
    a[n]=labib;
    n++;

      cout<<"After insertion at the End\n";
       for (i=0;i<n;i++)
       {
           cout <<a[i]<<" ";

       }
       return 0;
}
