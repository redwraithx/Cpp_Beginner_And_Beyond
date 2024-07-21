#include <iostream>

using namespace std;

int main()
{
    enum Direction
    {
        left,
        right, 
        up,
        down
    };
    
    Direction heading {left};
    
    // if you dont handle all cases use a default or make sure you have all cases handled or you will get warnings or errors depending on the compiler.
    switch(heading)
    {
        case left:
        {
            cout << "going left" << endl;
            break;
        }
        case right:
        {
            cout << "going right" << endl;
            break;
        }
        case up:
        {
            cout << "going up" << endl;
            break;
        }
        case down:
        {
            cout << "going down" << endl;
            break;
        }
        default:
            
    }
    
    
    cout << endl;
    
    return 0;
}