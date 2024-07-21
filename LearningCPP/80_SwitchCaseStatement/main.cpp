
/*
 * 
 * Ask the user what grade they expect on an exam and
 * tell them what they need to score to get it.
 * 
 */ 



#include <iostream>

using namespace std;

int main()
{
    char letter_grade {};
    
    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;
    
    switch(letter_grade)
    {
        case 'a':
        case 'A':
        {
            cout << "You need a 90 or above, study hard!" << endl;
            break;
        }
        case 'b':
        case 'B':
        {
            cout << "You need a 80 to 89 for a B, go study!" << endl;
            break;
        }
        case 'c':
        case 'C':
        {
            cout << "You need a 70 to 79 for an average grade!" << endl;
            break;
        }
        case 'd':
        case 'D':
        {
            cout << "You should try for a better grade, but you need a 60 to 69 for a D grade!" << endl;
            break;
        }
        case 'f':
        case 'F':
        {
            char confirm {};
            cout << "Are you sure you want an F grade (Y/N): ";
            cin >> confirm;
            
            if(confirm == 'y' || confirm == 'Y')
            {
                cout << "OK, I guess you dont need to study..." << endl;
            
            }
            else if(confirm == 'n' || confirm == 'N')
            {
                cout << "Good- go study!" << endl;
                
            }
            else
            {
                cout << "Illegal choice" << endl;
            }
            
            
            break;
        }
        default:
        {
            cout << "Sorry that is not a valid grade" << endl;
            
        }
        
    }
    
    
    cout << endl;
    return 0;
}