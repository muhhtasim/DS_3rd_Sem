/* Binary search in array
   2nd lab
   */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int x;
    cin >> x;

    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ar[mid] == x)
        {
            cout << "Found" << endl;
            cout << "The Index of X is: " << mid << endl;
            return 0;
        }
        else if (ar[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    cout << "X is Not Found" << endl;
    return 0;
}
