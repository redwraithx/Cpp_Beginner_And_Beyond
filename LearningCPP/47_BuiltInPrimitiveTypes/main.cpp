#include <iostream>

using namespace std;

int main()
{
    
    /*
     * Literal Consts 
     * 
     * int:
     *  12 - an integer
     *  12U - an unsigned integer
     *  12L - a long integer
     *  12LL - a long long integer
     * 
     */
     
     /*
      * Character literal constants (escape codes)
      * 
      * \n  - newline
      * \r  - return
      * \t  - tab
      * \b  - backspace
      * \'  - single quote
      * \"  - double quote
      * \\  - backslash
      * 
      */
    
    
    bool bool_value {false};
    cout << "Bool: " << bool_value << " , mem size: " << sizeof(bool) << " bytes" << endl;
    
    int int_num {0};
    cout << "Int: " << int_num << ", mem size: " << sizeof(int) << " bytes"  << endl;
    
    float float_num {0.0f};
    cout << "Float: " << float_num << ", mem size: " << sizeof(float) << " bytes"  << endl;
    
    double double_num {0.0};
    cout << "Double: " << double_num << ", mem size: " << sizeof(double) << " bytes"  << endl;
    
    char char_letter {'a'};
    cout << "char: " << char_letter << ", mem size: " << sizeof(char) << " bytes"  << endl;
    
    
    
    
    // using c++ 14 and higher you can add ' to numbers to make it more readable
    long long bigNum = {1'432'456'999'000};
    cout << endl << endl << "Big Num: " << bigNum << ", mem size (long): " << sizeof(long) << " bytes" << ", mem size (long long): " << sizeof(long long) << " bytes" << endl;
    
    return 0;
}