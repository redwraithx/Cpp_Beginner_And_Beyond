#include <iostream>

using namespace std;

int main()
{
    /*
     * Carpet cleaning service
     * -----------------------
     * 
     * charges $30 per room
     * sales tax is 6%
     * estimates are valid for 30 days
     * 
     * prompt the user for numbe rof rooms they would like cleaned and proviate an estimate such as:
     * 
     *  Estimate for carpet cleaning service:
     *      Number of rooms: 2
     *      Price per room: $30
     *      cost: $60
     *      Tax: $3.6
     * ======================================
     *  Total estimate: $63.6
     *  This estimate is valid for 30 days
     * ======================================
     * 
     * 
     * 
     * Pseudocode:
     *  Prompt the user to enter the number of rooms
     *  Display the number of rooms
     *  Display the price per room
     * 
     *  Display cost: (number of rooms * price per room)
     *  Display tax: number of rooms * price per room * tax rate
     *  Display Total Estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
     *  Display estimate expiration time
     * 
     */
     
     cout << "Hello, Welcome to Brians Carpet Cleaning Service" << endl;
     
     cout << "\nHow many rooms would you like cleaned? ";
     
     int number_of_rooms {0};
     cin >> number_of_rooms;
     
     const double price_per_room {30.0};
     const double sales_tax {0.06};
     const int estimate_expiry {30}; // number of days
     
     cout << "Number of rooms: " << number_of_rooms << endl;
     cout << "Price per room: $" << price_per_room << endl;
     cout << "Cost: $" << price_per_room * number_of_rooms << endl;
     
     cout << "Tax: $" << price_per_room * number_of_rooms * sales_tax << endl;
     cout << "===============================" << endl;
     cout << "Total Estimate: $" << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax) << endl;
     cout << "Estimate is valid for " << estimate_expiry << " days" << endl;
    
    return 0;
}