#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
 * Frank's Carpet Cleaning Service
 * 
 * Charges:
 *  $25 per small room
 *  $35 per large room
 * Sales Tax rate is 6%
 * Estimates are valid for 30 days
 * 
 * Prompt the user for the number of small and large rooms they would like cleaned
 * and provide an estime such as:
 * 
 *  Estimate for carpet cleaning service
 *      Number of small rooms: 3
 *      Number of learge rooms: 1
 *      Price per small room: $25
 *      Price per large room: $35
 *      Cost: $110
 *      Tax: $6.6
 *      ==========================
 *      Total Estimate: $116.6
 *      This estimate is valid for 30 days
 */


int main()
{
    cout << "Welcome to Brian's Carpet Cleaning Service." << endl;
    cout << "Enter number of small rooms: ";
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;
    
    cout << "Enter number of large rooms: ";
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;
    
    cout << "\nEstimate for Carpet Cleaning Service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    
    const double price_per_small_room {25.0};
    const double price_per_large_room {35.0};
    const double sales_tax {0.06};
    const int Estimate_Expiry {30};
    
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    
    double price_of_small_room = (price_per_small_room * number_of_small_rooms);
    double price_of_large_room = (price_per_large_room * number_of_large_rooms);
    double taxes = (price_of_small_room + price_of_large_room) * sales_tax;
    double cost = price_of_small_room + price_of_large_room;
    
    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << taxes << endl;
    
    cout << "=====================================" << endl;
    cout << "Total Estimate: $" << cost + taxes << endl;
    cout << "This estimate is valid for " << Estimate_Expiry << " days" << endl;
    return 0;
}