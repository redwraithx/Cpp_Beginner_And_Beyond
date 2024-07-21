#include <iostream>

using namespace std;


/*
 * 
 * Addition                                                 +
 * Subtraction                                              -
 * Multiplication                                           *
 * Division                                                 /
 * Modulo (or remainder. NOTE: only works with Integers)    %
 */


    // PEMDAS
        // Perenthuses
        // Exponents
        // Mulitplication
        // Division
        // Addition
        // Subtraction
        
    

int main()
{
    int num1 {200};
    int num2 {100};
    
    // Addition expression
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    
    int result {0};
    
    // Addition
    result = num1 - num2;
    cout << num1 << " + " << num2 << " = " << result << endl;
    
    // Subtraction
    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;
    
    // Multiplication
    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;
    
    // Division
    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;
    
    // Division intered from last ( result will be truncated if its a decimal return)
    result = num2 / num1;
    cout << num2 << " / " << num1 << " = " << result << endl;
    
    // Modulo
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;
    
    
    // update num1 & num2 values
    num1 = 10;
    num2 = 3;
    
    // Modulo
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;
    
    result = num1 * 10 + num2;
    cout << num1 << " * 10 + " << num2 << " = " << result << endl;
    
    
    // int division
    cout << 5/10 << endl;
    
    // float divition
    cout << 5.0/10.0 << endl;
    
    
    cout << endl;
    
    return 0;
}