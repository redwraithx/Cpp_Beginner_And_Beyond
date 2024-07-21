#include <iostream>

using namespace std;


/*
 * 
 * Increment Operator ++
 * Decrement Operator --
 * 
 * Increments or Decrements its operand by 1
 * Can be used with integers, floating point types and pointers
 * 
 * Prefix       ++num
 * Postfix      num++
 * 
 * Dont overuse this operator!
 * ALERT!!! Never use it twice for the same variable in the same statement!!
 * 
 */ 

int main()
{
    int counter {10};
    int result {0};
    
    // Example 1 - simple increment
    cout << "\nExample 1" << endl;
    
    cout << "Counter: " << counter << endl;
    
    counter = counter + 1;
    cout << "Counter: " << counter << endl;
    
    counter++;
    cout << "Counter: " << counter << endl;
    
    ++counter;
    cout << "Counter: " << counter << endl;
    
    
    // Example 2 - Preincrement
    cout << "\nExample 2" << endl;
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    // NOTE: the pre-increment
    result = ++counter;
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
    
    // Example 3 - Post-Increment
    cout << "\nExample 3" << endl;
    
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    // NOTE: the Post Increment
    result = counter++; 
    
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
    // Example 4
    cout << "\nExample 4" << endl;
    
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    // NOTE: The Pre-Increment
    result = ++counter + 10;
    
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
    // Example 5
    cout << "\nExample 5" << endl;
    
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    
    // NOTE: The Post Increment
    result = counter++ + 10;
    
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
    cout << "Counter: " << counter << endl;
    
    
    cout << endl;
    
    return 0;
}