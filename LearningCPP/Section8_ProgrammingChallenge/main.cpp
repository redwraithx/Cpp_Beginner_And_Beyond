/*
 * For this Program, using US Dollars and Cents
 * 
 * Write a program that asks the user to enter the follow:
 *  An INT representing the number of Cents
 * 
 * You may assume that the number of cents entered is greater than or equal to zero
 * 
 * The program should than display how to provide that change to the user.
 * 
 * In the US:
 *  1 Dollar is     100 cents
 *  1 Quarter is    25 cents
 *  1 Dime is       10 cents
 *  1 Nickel is     5 cents
 *  1 Penny is      1 cent
 * 
 * Here is an sample run:
 * 
 *  Enter an amount in cents: 92
 *  
 *  You can provide this change as follows:
 *  Dollars:    0
 *  Quarters:   3
 *  Dimes:      1
 *  Nickels:    1
 *  Pennies:    2
 * 
 *  Feel free to use your own currency system.
 * Also, think of how you might solve the problem using the "MODULO" Operator!
 * 
 * good luck!
 * 
 */




#include <iostream>

using namespace std;



void non_modulo_version()
{
    // defined conversion values in cents
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    const int penny_value {1};
    
    int cents_value {0};
    
    cout << "Enter an amount in cents: ";
    cin >> cents_value;
    
    
    int amount = cents_value / dollar_value;
    cents_value -= amount * dollar_value;
    int dollars = amount;
    
    amount = cents_value / quarter_value;
    cents_value -= amount * quarter_value;
    int quarters = amount;
    
    amount = cents_value / dime_value;
    cents_value -= amount * dime_value;
    int dimes = amount;
    
    amount = cents_value / nickel_value;
    cents_value -= amount * nickel_value;
    int nickels = amount;
    
    amount = cents_value / penny_value;
    cents_value -= amount * penny_value;
    int pennies = amount;
    
    
    
    cout << "\nYou can provide this change as follows:" << endl;
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;
}



void moduloVersion()
{
    // defined conversion values in cents
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    const int penny_value {1};
    
    int cents_value {0};
    
    cout << "Enter an amount in cents: ";
    cin >> cents_value;
    
    
    
    int dollars {0};
    int quarters {0};
    int dimes {0};
    int nickels {0};
    int pennies {0};
    
    cout << "\nYou can provide this change as follows:" << endl;
    
    int remainder {cents_value};
    
    dollars = cents_value / dollar_value;
    remainder %= dollar_value;
    cout << "Dollars: " << dollars << endl;
    
    quarters = remainder / quarter_value;
    remainder %= quarter_value;
    cout << "Quarters: " << quarters << endl;
    
    dimes = remainder / dime_value;
    remainder %= dime_value;
    cout << "Dimes: " << dimes << endl;
    
    nickels = remainder / nickel_value;
    remainder %= nickel_value;
    cout << "Nickels: " << nickels << endl;
    
    pennies = remainder / penny_value;
    remainder %= penny_value;
    cout << "Pennies: " << pennies << endl << endl;
    
}

int main()
{
    
   double  a = 100;
int b = 12;
int x = b % 3;
double  y = a / b;
int z = a / b;

cout << "X: " << x << ", Y: " << y << ", z: " << z << endl;
cout << "b % 3 = " << static_cast<double>(100 % 12) << endl;

    
    int selection {};
    
    cout << "1) non-modulo version\n";
    cout << "2) Modulo version\n";
    cout << "Enter 1 or 2: ";
    cin >> selection;
    
    
    
    // version 1
    if(selection == 1)
        non_modulo_version();
    
    // verison 2
    else if(selection == 2)
        moduloVersion();
    
    else
        cout << "\nInvalid selection" << endl;
    
    return 0;
}