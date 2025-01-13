/* Delete array in random position
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
    cout<<"Enter the position of delete\n";
    cin>>posi;

    while(posi<1 || posi>n+1)
    { cout <<"Invalid Position";
    cout<<"Enter new position";
    cin>>posi;
    }

      for (i=posi-1;i<n-1;i++)

      {
          a[i]=a[i+1];

      }
           n--;

      cout<<"After deletion\n";
       for (i=0;i<n;i++)
       {
           cout <<a[i]<<" ";

       }
       return 0;
}
