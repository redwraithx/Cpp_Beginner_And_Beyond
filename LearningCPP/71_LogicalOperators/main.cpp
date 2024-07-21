#include <iostream>

using namespace std;

/*
 * not (!) (unary) operator:
 *      a = true, than !a = false
 *      b = false, than !b = true
 */
 
 /*
  * and (&&) (binary) operator:
  *     a = true AND b = true, than a and b = true
  *     a = true AND b = false, than a and b = false
  *     a = false AND b = true, than a and b = false
  *     a = false AND b = false, than a and b = false
  */
  
  /*
   * or (||) (binary) operator:
   *    a = true OR b = true, than a || b = true
   *    a = true OR b = false, than a || b = true
   *    a = false OR b = true, than a || b = true
   *    a = false OR b = false, than a || b = false
   */


    /*
     * Logical Operators have a precedence just like math
     * 
     *  not (!) has higher precedence than AND (&&)
     *  AND (&&) has higher precedence than OR (||)
     *  
     *  not (!) is an unary operator
     *  AND (&&) and OR (||) are binary operators
     */

int main()
{
    int num {};
    const int lower {10};
    const int upper {20};
    
    cout << boolalpha;
    
    // Determine if an entered integer is between two other integers
    // assume lower < upper
    cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
    cin >> num;
    
    bool within_bounds {false};
    
    within_bounds = (num > lower && num < upper);
    cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl;
    
    
    // Determine if an entered integer is outside two other integers
    // assume lower < upper
    cout << "\nEnter an integer j- the bounds are " << lower << " and " << upper << ": ";
    cin >> num;
    
    bool outside_bounds {false};
    outside_bounds = (num < lower || num > upper);
    cout << num << " is outside " << lower << " and " << upper << ": " << outside_bounds << endl;
    
    
    // Determin if an entered integer is exactly on the boundary
    // assume lower < upper
    cout << "\nEnter an integer - the bounds are " << lower << "and " << upper << ": ";
    cin >> num;
    
    bool on_bounds {false};
    on_bounds = (num == lower || num == upper);
    cout << num << " is equal to " << lower << " or " << upper << ": " << on_bounds << endl;
    
    
    // Determine if you need to wear a coat based on temperature and wind speed
    bool wear_coat {false};
    double temperature {};
    int wind_speed {};
    
    // wind over this value requires a coat
    const int window_speed_for_coat {25};
    // temperature below this value requires a coat
    const double temperature_for_coat {45};
    
    // Require a coat if either wind is to high OR temperature is too low
    cout << "\nEnter current temperature in (F): ";
    cin >> temperature;
    cout << "Enter windspeed in (mph): ";
    cin >> wind_speed;
    
    wear_coat = (temperature < temperature_for_coat || wind_speed > window_speed_for_coat);
    cout << "Do you need to wear a coat using OR? " << wear_coat << endl;
    
    // Require a coat if BOTH the wind speed is too high AND temperature is too low
    wear_coat = (temperature < temperature_for_coat && wind_speed > window_speed_for_coat);
    cout << "Do you need to wear a coat using AND? " << wear_coat << endl;
    
    
    
    
    cout << endl;
    
    return 0;
}