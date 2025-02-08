//Fibonacci Number

// Time Complexity - O(2^n)


#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int m;
    cout << "Enter the Nth Fibonacci number: " << endl;
    cin >> m;

    while (m < 0)
        {
        cout << "Fibonacci is not defined for negative numbers." << endl;
        cout << "Enter the valid Nth Fibonacci number: " << endl;
        cin>>m;
        }
        cout << "The " << m << "th Fibonacci number is: " << fibo(m) << endl;

    return 0;
}


//For fast
// Time Complexity - O(n)

/*
    #include <iostream>
using namespace std;

int fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter the Nth Fibonacci number: ";
    cin >> n;

    if (n < 0) {
        cout << "Fibonacci is not defined for negative numbers." << endl;
    } else {
        cout << "The " << n << "th Fibonacci number is: " << fibo(n) << endl;
    }

    return 0;
}

*/



// For faster
// Time Complexity - O(logn)

/*

#include <iostream>
using namespace std;

void multiply(int F[2][2], int M[2][2]) {
    int x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
    int y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
    int z = F[1][0] * M[0][0] + F[1][1] * M[1][0];
    int w = F[1][0] * M[0][1] + F[1][1] * M[1][1];

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

void power(int F[2][2], int n) {
    if (n == 0 || n == 1) return;

    int M[2][2] = {{1, 1}, {1, 0}};

    power(F, n / 2);
    multiply(F, F);

    if (n % 2 != 0) multiply(F, M);
}

int fibo(int n) {
    if (n == 0) return 0;

    int F[2][2] = {{1, 1}, {1, 0}};
    power(F, n - 1);

    return F[0][0];
}

int main() {
    int n;
    cout << "Enter the Nth Fibonacci number: ";
    cin >> n;

    if (n < 0) {
        cout << "Fibonacci is not defined for negative numbers." << endl;
    } else {
        cout << "The " << n << "th Fibonacci number is: " << fibo(n) << endl;
    }

    return 0;
}

*/
