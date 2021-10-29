#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Please Enter A Integer\n";
    cin >> n;
    if (n % 2 == 0)
        cout << n << " Is Even";
    else
        cout << n << " Is Odd";
    return 0;
}
