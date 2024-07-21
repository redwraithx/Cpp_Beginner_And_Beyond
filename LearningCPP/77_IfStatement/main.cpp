#include <iostream>

using namespace std;

int main()
{
    int num {};
    const int min {10};
    const int max {100};
    
    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;
    
    if(num == min || num == max)
            cout << "Number is " << num << endl;
            
    if(num >= min && num <= max)
    {
        cout << "number is in range" << endl;
    }
    else
    {
        cout << "your number was not in the set range, try again." << endl;
    }    
    
    
    return 0;
}