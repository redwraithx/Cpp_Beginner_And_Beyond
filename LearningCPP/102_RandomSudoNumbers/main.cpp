#include <iostream>
#include <cstdlib>  // required for rand()
#include <ctime>    // required for time()


using namespace std;

int main()
{
    int randome_number {};
    size_t count {10};      // number of random numbers to generate
    int min {1};            // lower bounds (inclusive)
    int max {6};            // upper bounds (inclusive)
    
    // seed the random number generator
    // if you don't seed the generator you will get the same requence random numbers every run
    
    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));
    
    for(size_t i{1}; i <= count; i++)
    {
        randome_number = rand() % max + min;    // generate a random number [min, max]
        cout << randome_number << endl;
    }
    
    
    
    cout << endl;
    
    return 0;
}