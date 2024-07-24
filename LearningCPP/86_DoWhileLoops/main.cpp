#include <iostream>

using namespace std;

int main()
{
    // Simple Menu Example
    
    char selection {};
    
    do
    {
        cout << "\n----------" << endl;
        cout << "1. Do this thing" << endl;
        cout << "2. Do this other thing" << endl;
        cout << "3. Do yet another thing" << endl;
        cout << "Q. Quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;
        
        // this logic will work also
        /*
        if(selection == '1')
            cout << "\nDoing this thing..." << endl;
        else if(selection == '2')
            cout << "\nDoing this other thing..." << endl;
        else if(selection == '3')
            cout << "\nDoing yet another thing..." << endl;
        else if(selection == 'q' || selection == 'Q')
            cout << "\n\nQuiting Application..." << endl;
        else
            cout << "\nSelection Input Unknown, Try Again!" << endl;
        */
        
        
        switch(selection)
        {
            case '1':
            {
                cout << "\nDoing this thing..." << endl;
                break;
            }
            case '2':
            {
                cout << "\nDoing this other thing..." << endl;
                break;
            }
            case '3':
            {
                cout << "\nDoing yet another thing..." << endl;
                break;
            }
            case 'q':
            case 'Q':
            {
                cout << "\n\nQuiting application..." << endl;
                break;
            }
            default:
            {
                cout << "\nSelection Input Unknown, Try Again!" << endl;
            }
            
        }
        
    } while(selection != 'q' && selection != 'Q'); // NOTE: if you use OR or || instead of the && you will run into issues.
    
    
    
    
    cout << endl;
    
    return 0;
}