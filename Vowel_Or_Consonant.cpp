#include <iostream>
using namespace std;
int main()
{
    char c;
    bool isLowercaseVowel, isUppercaseVowel;

    cout << "Please Enter An Alphabet\n";
    cin >> c;

    // Evaluates to 1 (True) if c is a uppercase vowel
    isLowercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // Evaluates to 1 (True) if c is a lowercase vowel
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // Show error message if c is not an alphabet
    if (!isalpha(c))
        printf("Error!!!Non-Alphabetic Character");
    else if (isLowercaseVowel || isUppercaseVowel)
        cout << c << " Is A Vowel";
    else
        cout << c << " Is A Consonant";
}
