#include <iostream>

using namespace std;

int main()
{
    /*
     * Initialize age in 3 ways
     * 
     * int age = 9;
     * int age (9);
     * int age {9}; // this is perfered
     */
    
    int age;  // this will result in random data left in the address of memory that this varaible is initialized at. you should always initialize with a value.
    int age2 (9);
    int age3 {36};
    cout << "age: " << age << endl << "age 2: " << age2 << endl << "age 3: " << age3 << endl;
    
    
    return 0;
}