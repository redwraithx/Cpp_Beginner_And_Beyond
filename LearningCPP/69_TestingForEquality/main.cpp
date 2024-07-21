#include <iostream>

using namespace std;

int main()
{
    bool equal_result {false};
    bool not_equal_result {false};
    
    int num1{}, num2{};
    
    // this will display true/flase instead of 1/0 for booleans
    cout << boolalpha;
    
    // Integer comparisons
    /*cout << "Enter two integers seperated by a space: ";
    cin >> num1 >> num2;
    
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    */
    
    
    // character comparisions
    /*char char1{}, char2{};
    cout << "Enter two characters seperated by a space: ";
    cin >> char1 >> char2;
    
    equal_result = (char1 == char2);
    not_equal_result = (char1 != char2);
    */
    
    // double comparisons
    double double1{}, double2{};
    /*cout << "Enter two doubles seperated by a space: ";
    cin >> double1 >> double2;
    
    equal_result = (double1 == double2);
    not_equal_result = (double1 != double2);*/
    
    
    // int double comparisons
    cout << "Enter an integer and a double seperated by a space: ";
    cin >> num1 >> double1;
    equal_result = (num1 == double1);
    not_equal_result = (num1 != double1);
    
    
    
    
    
    
    cout << "Comparison results (equals): " << equal_result << endl;
    cout << "Comparison results (not equals): " << not_equal_result << endl;
    
    cout << endl;
    
    return 0;
}