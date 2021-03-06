#include <iostream>

using namespace std;

int main()
{
    float amount;

    float value(float p, int n, float r = 0.15); // Prototype
    void printline(char ch = '*', int len = 40); // Prototype

    printline(); // Uses default values for arguments

    amount = value(5000.00, 5); // Default for 3rd argument

    cout << "Final value = " << amount << "\n";

    printline('=');

    return 0;
}

float value(float p, int n, float r)
{
    int year = 1;
    float sum = p;

    while (year <= n)
    {
        sum = sum * (1 + r);
        year = year + 1;
    }
    return (sum);
}

void printline(char ch, int len)
{
    for (int i = 1; i <= len; i++)
        printf("%c", ch);
    printf("\n");
}