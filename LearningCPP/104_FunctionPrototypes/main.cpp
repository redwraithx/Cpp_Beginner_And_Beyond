#include <iostream>

using namespace std;

// function prototypes
void area_circle();
void volume_cylinder();
double calc_area_circle(double radius);
double calc_volume_cylinder(double radius, double height);



const double pi {3.14159};


int main()
{
    area_circle();
    volume_cylinder();
    
    
    cout << endl;
    
    return 0;
}



double calc_area_circle(double radius)
{
    return pi * radius * radius;
}

void area_circle()
{
    double radius {};
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    cout << "The Area of a circle with radius " << radius << " is: " << calc_area_circle(radius) << endl;    
}

double calc_volume_cylinder(double radius, double height)
{
    //return pi * radius * radius * height;
    return calc_area_circle(radius) * height;
}

void volume_cylinder()
{
    double radius {};
    double height {};
    
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "\nEnter the height of the cylinder: ";
    cin >> height;
    
    cout << "\nThe Volume of the cylinder with radius " << radius << " and height " << height << " is: " << calc_volume_cylinder(radius, height) << endl;
}