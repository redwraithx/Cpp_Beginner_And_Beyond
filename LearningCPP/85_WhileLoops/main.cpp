#include <iostream>

using namespace std;

int main()
{
    
    cout << "Type 1 - While Loop count down" << endl;
    
    int num {};
    cout << "Enter a positive integer - start the countdown: ";
    cin >> num;
    
    while (num > 0)
    {
        cout << num << endl;
        --num;
        
    }
    
    cout << "Blast off!" << endl;
    
    
    
    cout << "\n\nType 2 - While loop counting UP" << endl;
    
    num = 0;
    
    cout << "Enter a positive integer to count up to: ";
    cin >> num;
    
    int i {1};
    while(num >= i)
    {
        cout << i << endl;
        i++;
    }
    
    
    cout << "\n\nType 3 - While loop less than 100" << endl;
    
    int number {};
    
    cout << "Enter an integer less than 100: ";
    cin >> number;
    
    // (nnumber !(number < 100) would work also
    while(number >= 100)
    {
        cout << "Enter an integer less than 100: ";
        cin >> number;
    }
    
    cout << "thanks" << endl;
    
    
    cout << "\n\nType 4 - While loop using bools" << endl;
    
    bool done {false}; // if this is true the while loop wont happen
    number = 0;
    
    while(!done)
    {
        cout << "Enter an integer between 1 and 5: ";
        cin >> number;
            cout << "Print: " << number << endl;
        
        if(number <= 1 || number >= 5)
            cout << "Out of range, try again" << endl;
        else
        {
            cout << "thanks!" << endl;
            done = true;
        }
    }
    
    
    
    
    
    
    cout << endl;
    
    return 0;
}