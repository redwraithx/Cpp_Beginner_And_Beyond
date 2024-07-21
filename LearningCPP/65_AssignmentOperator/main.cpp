#include <iostream>

using namespace std;

int main()
{
    int num1 {10};
    int num2 {20};
    
    // assign 100 to num1
    num1 = 100;
    
    // assign num2's value to num1
    num1 = num2;
    
    // assign 1000 to num2 and num2 to num1
    num1 = num2 = 1000;
    
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    
    
    return 0;
}