#include <iostream>
#include <cctype> // functions for testing characters & Converting character case

using namespace std;

int main()
{
    char test_char {'b'};
    
    
    /*
     * isalpha(c)   - true if c is a letter
     * isalnum(c)   - true if c is a letter or digit
     * isdigit(c)   - true if c is a digit
     * islower(c)   - true if c is a lowercase letter
     * isprint(c)   - true if c is a printable character
     * ispunct(c)   - true if c is a punctionation character
     * isupper(c)   - true if c is an uppercase letter
     * isspace(c)   - true if c is whitespace
     */
    
    cout << boolalpha << endl << endl;
    cout << "isalpha(" << test_char << "): " << static_cast<bool>(isalpha(test_char)) << endl;
    cout << "isalpha(" << test_char << "): " << static_cast<bool>(isalnum(test_char)) << endl;
    cout << "isalpha(" << test_char << "): " << static_cast<bool>(isdigit(test_char)) << endl;
    cout << "isalpha(" << test_char << "): " << static_cast<bool>(islower(test_char)) << endl;
    cout << "isalpha(" << test_char << "): " << static_cast<bool>(isprint(test_char)) << endl;
    cout << "isalpha(" << test_char << "): " << static_cast<bool>(ispunct(test_char)) << endl;
    cout << "isalpha(" << test_char << "): " << static_cast<bool>(isupper(test_char)) << endl;
    cout << "isalpha(" << test_char << "): " << static_cast<bool>(isspace(test_char)) << endl;
    
    cout << "Convertint " << test_char << " to lower if possible: " << static_cast<char>(tolower(test_char)) << endl;
    cout << "Convertint " << test_char << " to upper if possible: " << static_cast<char>(toupper(test_char)) << endl;
    
    cout << endl;
    
    return 0;
}