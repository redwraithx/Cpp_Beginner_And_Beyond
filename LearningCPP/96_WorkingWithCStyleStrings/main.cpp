#include <iostream>
#include <cstring>  // for c-style string functions
#include <cctype>   // for character-based functions
#include <limits>   // only used for cin to ignore the '\n' character

using namespace std;

int main()
{
    /*
     * I recommend commenting out each piece if you want to see what they do and 
     * gain a bigger understanding of what is going on as it can be overwhelming
     */
    
    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};
    
    cout << "\n\nType 1 - get name and use string length, string copy and string concatenate functions" << endl;
    
    cout << "\nPlease enter your first name: ";
    cin >> first_name;
    
    cout << "Please enter your last name: ";
    cin >> last_name;
    
    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;
    
    strcpy(full_name, first_name);      // copy first_name to full_name
    strcat(full_name, " ");             // concatenate full_name and a space
    strcat(full_name, last_name);       // concatenate last_name to full_name
    cout << "You full name is " << full_name << endl;
    
    
    // commented out due to last name as it will get caught in the next cin.getline call
//    cout << "\n\n----------------------------------------" << endl;
//    cout << "Type 2 - get full name, but will stop reading the data if you enter a space" << endl;
//    cout << "Enter your full name: ";
//    cin >> full_name;
//    cout << "full name: " << full_name << endl;
    
    
    
    // Clear the newline character left in the input buffer, which uses the #include <limits> else it would not be needed
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    cout << "\n\n-----------------------------------------" << endl;
    cout << "Type 3 - using cin.getline(variable, length) will not stop if a space is found" << endl;
    cout << "Enter your full name again: ";
    cin.getline(full_name, 50);
    cout << "Your full name is " << full_name << endl;
    
    
    cout << "\n\n---------------------------------" << endl;
    cout << "Type 4 - comparison example 1 using entered name" << endl;
    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " are different" << endl;
    
    
    cout << "\n\n----------------------------------" << endl;
    cout << "Type 5 - comparison example 2 using for loop" << endl;
    // NOTE: using size_t is the more correct way to do the initializer of the forloop
    for(size_t i {0}; i < strlen(full_name); ++i)
    {
        if(isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    cout << "Your full name is " << full_name << endl;
    
    
    cout << "\n\n---------------------------------" << endl;
    cout << "type 6 - comparison example 3 temp and full_name but there was a change" << endl;
    
    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same 2" << endl;
    else
        cout << temp << " and " << full_name << " are different 2" << endl;
        
    cout << "\n-----------------------------------------" << endl;
    cout << "Result of comparing " << temp << " and " << full_name << ": " << strcmp(temp, full_name) << endl;
    cout << "Result of comparing " << full_name << " and " << temp << ": " << strcmp(full_name, temp) << endl;
    
    
    
    cout << endl;
    
    return 0;
}