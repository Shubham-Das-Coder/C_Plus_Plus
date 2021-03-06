#include <iostream>
#include <math.h>
using namespace std;
void printPrimeFactors(int n)
{
    while (n % 2 == 0)
    {
        cout << "2\t";
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            cout << i << "\t";
            n = n / i;
        }
    }
    if (n > 2)
        cout << n << "\t";
}
int main()
{
    int n;
    cout << "Please Enter A Number\n";
    cin >> n;
    cout << "Prime Factors Of " << n << " Are\n";
    printPrimeFactors(n);
    return 0;
}