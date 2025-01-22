/* Bubble sorting in array
    4th cls probably
    */

#include <bits/stdc++.h>
using namespace std;

void bubbleSort (int arr[],int n)
{
    //int i,j;
    for(int i=0;i<n-1;i++)
    {
        bool isSwap = false;
        for (int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap (arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap)
        {
            return;
        }
    }
}

void printArray (int arr[],int n)
{
    cout<<"\nSorted array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{     int i,j,n;
    cout<<"Enter the range of array"<<endl;
    cin>>n;
     int* arr = new int[n];
    cout<<"Enter the elements of array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is"<<endl;
     for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    } cout<<endl;
   // int n=5;
  //  int arr[]={4,1,5,2,3};
    bubbleSort (arr,n);
    printArray (arr,n);
    return 0;
}

