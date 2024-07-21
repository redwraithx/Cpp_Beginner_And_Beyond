
// this was intruduced in C++ 11
/*
 * 
 * for (var_type var_name: sequence)
 *     statement; // can use var_name
 * 
 * for (var_type var_name: sequence)
 * {
 *     statements; // can use var_name
 * }
 */


#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void videoExamples()
{
    cout << "videoExample Type 1 of examples" << endl;
    int scores [] { 100, 90, 97 };
    
    for (int score : scores)
        cout << score << endl;
     
    // using the auto keyward will have the compiler figure out the type
    for(auto score2 : scores)
        cout << score2 << endl;
    
    
    
    cout << "\nvideoExample Type 2 of examples" << endl;
    vector<double> temps { 87.2, 77.1, 80.0, 72.5 };
    
    double average_temp {0};
    double running_sum {0};
    
    for(auto temp: temps)
        running_sum += temp;
    
    average_temp = running_sum / temps.size();
    cout << "Average temp: " << average_temp << endl;
    
    
    cout << "\nvideoExample Type 3 of examples" << endl;
    double average_temp2 {0};
    double running_sum2 {0};
    int size {0};
    
    for(auto temp: {60.2, 80.1, 90.0, 78.2} )
    {
        running_sum2 += temp;
        ++size;
    }
    average_temp2 = running_sum2 / size;
    cout << "Average temp 2: " << average_temp2 << endl;
    
    cout << endl;
    
    
    cout << "\nvideoExample Type 4 of examples : strings printed by letter" << endl;
    for(auto c : "Frank")
        cout << c << endl;
}


int main()
{
    // uncomment to see examples working
    //videoExamples();
    
    
    cout << "Type 1 using int array collection" << endl;
    int scores[] { 10, 20, 30 };
    
    for(int score : scores)
        cout << score << endl;
    
    
    cout << "\nType 2 using same int array collection but using auto keyword" << endl;
    // remember that the compiler will figure out the type
    for(auto score : scores)
        cout << score << endl;
    
    
    cout << "\nType 3 using a vector collection of doubles" << endl;
    vector<double> temperatures { 87.9, 77.9, 80.0, 72.5 };
    double average_temp {};
    double total {};
    
    for(auto temp : temperatures)
        total += temp;
    
    if(temperatures.size() != 0)
        average_temp = total / temperatures.size();
    
    // manipulate the output to only show 1 decimal point (it will round the data returned)
    cout << fixed << setprecision(1);
    cout << "Average Temperatures: " << average_temp << endl;
    
    
    cout << "\nType 4 using a collection from 1 to 5 within the loop" << endl;
    for (auto val : { 1, 2, 3, 4, 5 })
        cout << val << endl;
    
    
    cout << "\nType 5 using a string but not printing spaces" << endl;
    for(auto c : "This is a test")
        if(c != ' ')
            cout << c;
    
    
    cout << "\nType 6 using a string but spaces will be tabbed space" << endl;
    for(auto c : "This is _another_ test")
        if(c == ' ')
            cout << "\t";
        else
            cout << c;
    
    
    
    
    
    cout << endl;
    return 0;
}