#include <iostream>
using namespace std;

int main()
{
    char oper;
    float num1, num2;
    cout << "Please Enter An Operator (+,-,*,/)\n";
    cin >> oper;
    cout << "Please Enter The Two Numbers\n";
    cin >> num1 >> num2;

    switch (oper)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
    default:
        cout << "Error! The Operator Is Not Correct";
        break;
    }
}
