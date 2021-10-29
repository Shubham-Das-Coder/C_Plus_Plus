#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Please Enter An Integer\n";
    cin >> n;
    (n % 2 == 0) ? cout << n << " Is Even" : cout << n << " Is Odd";
    return 0;
}
