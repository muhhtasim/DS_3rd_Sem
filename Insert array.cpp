/*insert in 1st place in array
 1st class of DS
 8/1/25
*/

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n,i,value;
    cout<<"enter the range of array\n";
    cin>>n;
    int a[n+1];
     cout<<"enter the eliment of array\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Input the random value\n";
    cin>>value;
    for(i=n-1;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=value;
    n++;
    cout<<"After insertion at the begining\n";
    for(i=0;i<n-1;i++)
    {cout<<a[i]<<" ";}
    return 0;
}
