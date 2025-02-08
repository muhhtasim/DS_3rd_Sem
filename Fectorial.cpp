//Fectorial

#include <iostream>
using namespace std;

int fect(int n)
{
    if (n==0||n==1)
        {
          return 1;
        }
    return n * fect(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number to calculate its factorial: "<<endl;
    cin >> n;

    while (n<0)
        {
          cout << "Fectorial is not defined for negative numbers." << endl;
          cout << "Enter a positive number for calculating: " << endl;
          cin>>n;
        }
        cout << "The " <<n<< "th Fectorial number is: " << fect(n)<< endl;

    return 0;
}

