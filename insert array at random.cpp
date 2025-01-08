/*insert in random place in array
 1st class of DS
 8/1/25
*/

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n,i,value,posi;
    cout<<"enter the range of array\n";
    cin>>n;
    int a[n+1];
     cout<<"enter the eliment of array\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
        for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nInput the random value\n";
    cin>>value;
    cout<<"Input the position\n";
    cin>>posi;
    while (posi<1||posi>n+1)
    {
        cout<<"Invalid position\n";
        cout<<"Enter new position\n";
        cin>>posi;
    }
    for(i=n-1;i>=posi-1;i--)
    {
        a[i+1]=a[i];
    }
   a[posi-1]=value;
    //n++;
    cout<<"After insertion at the Position\n";
    for(i=0;i<n+1;i++)
    {cout<<a[i]<<" ";}
    return 0;
}
