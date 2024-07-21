#include <iostream>

using namespace std;


/*
 * Ask the user to enter 3 integer
 * Calculate the sum of the integers then
 * calculate the average of the 3 integers.
 * 
 * Display the 3 integers entred
 * the sum of hte 3 integers and
 * the average of the 3 integers.
 */

int main()
{
    // initializes to 0, dont forget the brackets
    int total {};
    int num1 {}, num2 {}, num3 {};
    const int count {3};
    
    cout << "Enter 3 integers seperated by spaces: ";
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    double average {0.0};
    
    // either int value could be converted to make it work, or both.
    average = total / static_cast<double>(count);
    
    cout << "the 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "the sum of the numbers is: " << total << endl;
    cout << "the average of the numbers is: " << average << endl;
    
    
    
    cout << endl;
    
    return 0;
}