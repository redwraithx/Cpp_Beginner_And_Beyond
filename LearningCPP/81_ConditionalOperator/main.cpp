#include <iostream>

using namespace std;

int main()
{
    int num {};
    
    cout << "Enter an integer: ";
    cin >> num;
    
    // type 1
    if(num % 2 == 0)
        cout << num << " is even" << endl;
    else
        cout << num << " is odd" << endl;
    
    // type 2
    cout << num << ((num % 2 == 0) ? " is even" : " is odd") << endl << endl;
    
    
    
    // int type 1
    int num1 {}, num2 {};
    
    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    
    if(num1 != num2)
    {
        cout << "Largest: " << ((num1 > num2) ? num1 : num2) << endl;
        cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
    }
    else 
    {
        cout << "The numbers are the same" << endl;
    }
    
    cout << endl;
    
    return 0;
}