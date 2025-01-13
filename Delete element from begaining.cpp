/* Delete array 1st position
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main ()
{
    int i,n,value,posi;
     cout<<"Enter the rang of array\n";
   cin>>n;
   int a[n+1];
    cout<<"Enter the elements of array\n";
    for (i=0;i<n;i++)
    {
        cin>>a[i];

    }
   // n--;
     cout<<"After deletion at the begaining\n";
       for (i=1;i<n;i++)
       {
           cout <<a[i]<<" ";

       }
       return 0;
}
