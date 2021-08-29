/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main() {
char c;
bool LowercaseVowel, isUppercaseVowel;
cout << "Enter an alphabet: ";
cin >> c;
// evaluates to 1 (true) if c is a lowercase vowel
LowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
// evaluates to 1 (true) if c is an uppercase vowel
isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
// show error message if c is not an alphabet
if (!isalpha(c))
printf("Error! Non-alphabetic character.");
else if (LowercaseVowel || isUppercaseVowel)
cout << c << " is a vowel.";
else
cout << c << " is a consonant.";
return 0;
}
