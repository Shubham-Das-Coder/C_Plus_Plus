// Program to find first and last digits of a number
#include <bits/stdc++.h>
using namespace std;

// Find the first digit
int firstDigit(int n)
{
    // Remove last digit from number
    // till only one digit is left
    while (n >= 10)
        n /= 10;

    // Return the first digit
    return n;
}

// Find the last digit
int lastDigit(int n)
{
    // Return the last digit
    return (n % 10);
}

// Driver program
int main()
{
    int n;
    cout << "Enter number\n";
    cin >> n;
    cout << "First digit : " << firstDigit(n) << endl;
    cout << "Last digit : " << lastDigit(n) << endl;
    return 0;
}