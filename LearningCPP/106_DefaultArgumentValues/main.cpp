#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double calc_cost(double base_cost = 100.0, double tax_rate = 0.06, double shipping = 3.50);
void greeting(string name, string prefix = "Mr.", string suffix = "");


double calc_cost(double base_cost, double tax_rate, double shipping)
{
    return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting(string name, string prefix, string suffix)
{
    cout << "Hello " << prefix + " " + name + " " + suffix << endl;
}

int main()
{
    double cost {0};
    cost = calc_cost(100.0, 0.08, 4.25);        // will use no defaults 100 + 8 + 4.25
    
    cout << fixed << setprecision(2);
    cout << "Cost is: " << cost << endl;        // Cost: 112.25
    
    cost = calc_cost(100.0, 0.08);              // will use default shipping value, 100 + 8 + 3.50
    cout << "Cost is: " << cost << endl;        // Cost: 111.50
    
    cost = calc_cost(200.0);                    // will use deafult tax_rate & shipping values, 200 + 6 + 3.50
    cout << "Cost is: " << cost << endl;        // Cost: 215.50
    
    cost = calc_cost();                         // will use all default values, 100 + 6 + 3.50
    cout << "Cost is: " << cost << endl;        // Cost: 109.50
    
    cout << endl;
    
    greeting("Glen Jones", "Dr.", "M.D.");
    greeting("James Rogers", "Professor", "Ph.D");
    greeting("Frank Miller", "Dr.");
    greeting("William Smith");
    greeting("Mary Howard", "Mrs.", "Ph.D");    
    
    
    
    cout << endl;
    
    return 0;
}