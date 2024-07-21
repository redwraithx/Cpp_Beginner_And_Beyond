#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main()
{
    /*
     * using the header cLimits
     * 
     * you can test for min and max of a primitive type such as int, char, bool, float, double
     * 
     * CHAR_MIN = lowest value this type can hold.
     * CHAR_MAX = highest value this type can hold.
     * LONG_MIN
     * LONG_MAX
     * LLONG_MIN
     * LLONG_MAX
     * INT_MIN
     * INT_MAX
     * FLOAT_MIN
     * FLOAT_MAX
     * 
     * etc...
     */
    
    cout << "Min & max values of primitives" << endl << endl;
    
    cout << "NOTE: THERE is NO min / max for bool as it would be true/flase or 0/any other number" << endl;
    cout << "char:          " << CHAR_MIN   << " / " << CHAR_MAX    << endl;
    cout << "int :          " << INT_MIN    << " / " << INT_MAX     << endl;
    cout << "short:         " << SHRT_MIN   << " / " << SHRT_MAX    << endl;
    cout << "long:          " << LONG_MIN   << " / " << LONG_MAX    << endl;
    cout << "Long long:     " << LLONG_MIN  << " / " << LLONG_MAX   << endl;
    cout << "float:         " << FLT_MIN    << " / " << FLT_MAX     << endl;
    cout << "double:        " << DBL_MIN    << " / " << DBL_MAX     << endl;
    cout << "Long double:   " << LDBL_MIN   << " / " << LDBL_MAX    << endl;
    
    
    
    return 0;
}