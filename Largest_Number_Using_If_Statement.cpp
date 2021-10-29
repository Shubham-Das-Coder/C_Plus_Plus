#include <iostream>
using namespace std;
int main()
{
    float n1, n2, n3;
    cout << "Please Enter Three Numbers\n";
    cin >> n1 >> n2 >> n3;
    if (n1 >= n2 && n1 >= n3)
        cout << "The Largest Number Is " << n1;
    if (n2 >= n1 && n2 >= n3)
        cout << "The Largest Number Is " << n2;
    if (n3 >= n2 && n3 >= n2)
        cout << "The Largest Number Is " << n3;
    return 0;
}
