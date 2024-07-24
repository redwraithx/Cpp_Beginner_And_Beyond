
/*
 * 
 * This Challenge is about using a colleciton (list) of integers and allowing the user to select options from a menu to perform operations on the list.
 * 
 * Your program should display a menu options to the user as follows:
 * 
 * P    -   Print numbers
 * A    -   Add a number
 * M    -   Display mean of the numbers
 * S    -   Display the smallest number
 * L    -   Display the largest number
 * Q    -   Quit Application
 * 
 * Enter your choice:
 * 
 * 
 * The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
 * if an illegal choise is made, you should display, "Unknown selection, please try again" and the menu options should be displayed again.
 * 
 * 
 * If the user enters 'P' or 'p', you should display all the elements (ints) in the list.
 * If the list is empty you should display "[] - the list is empty"
 * If the list is NOT empty than all the list elements should be displayed inside [SQUARE BRACKETS] seperated by a SPACE.
 * For example, [ 1 2 3 4 5 ]
 * 
 * If the user enters 'A' or 'a', than you should prompt the user for an integer to add to the list
 * which you will add to the list and than display, "NUMBER added".
 * Duplicated list entries are OK.
 * 
 * If the user enters 'M' or 'm', you should calculate the mean or average of the elements in the list and display it.
 * If the list is empty you should display, "Unable to calculate the mean - no data"
 * 
 * If the user enters 'S' or 's', you should display the smallest element in the list.
 * For example, if the list contains [2 4 5 1], you should display, "The smallest number is 1"
 * If the list is empty you should display, "Unable to determine the smallest number - list is empty"
 * 
 * If the user enters 'L' or 'l', you should display the largest element in the list
 * For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
 * If the list is empty you should display, "Unable to determine the largest number - list is empty"
 * 
 * If the user enters 'Q' or 'q', than you should display 'Goodbye" and the program should terminate.
 * 
 * Before you begin. Write out the steps you need to take and decide in what order they should be done.
 * This about what loops you should use as well as what you will use for your selection logic.
 * 
 * This exercise can be bhallenging! it may likely take a few attempts before you complete it -- that's OK!
 * 
 * Finally, be sure to test your program as you go and at the end.
 * 
 * Hint: Use a vector!
 * 
 * Additional functionality if you should to extend this program.
 * 
 * - Search for a number in the list and if found display the number of times it occurs in the list
 * - Clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
 * - don't allow duplicate entries
 * - come up with your own idea's
 * 
 */



#include <iostream>
#include <vector>
#include <iomanip> // for decimal point control


using namespace std;

int main()
{
    // the list of data
    vector<int> data_collection {};
    
    bool quit_app {false};
    
    char allow_duplicate_entries {};
    
    cout << "would you like to allow duplicate entries in the list (Y/N): ";
    cin >> allow_duplicate_entries;
    
    if(allow_duplicate_entries == 'Y' || allow_duplicate_entries == 'y')
        cout << "\nallowing duplicate entries in the list" << endl;
    else
        cout << "\nduplicate entries are not allowed in the list" << endl;
    
    // while loop for the logic container
    while(true)
    {
        // selection for user menu input
        char selection {};
        
        cout << "\nP    - Print numbers";
        cout << "\nF    - Search for a number";
        cout << "\nA    - Add a number";
        cout << "\nD    - Remove a number";
        cout << "\nC    - Clear Data from list";
        cout << "\nM    - Display mean of the numbers";
        cout << "\nS    - Display the smallest number";
        cout << "\nL    - Display the largest number";
        cout << "\nQ    - Quit" << endl;
        
        cout << "\nEnter your choice: ";
        cin >> selection;
        
        
        // if else would have been smaller but both would work for this challenge.
        // use a switch statment for checking the selection.. and use a bool if we are to quit application.
        switch(selection)
        {
            case 'P':
            case 'p':
            {
                
                if(data_collection.size() == 0)
                {
                    cout << "\n[] - the list is empty" << endl;
                }
                else
                {
                    cout << "\n[ ";
                    for(auto data : data_collection)
                        cout << data << " ";
                    
                    cout << "]" << endl;          
                }
                break;
            }
            case 'F':
            case 'f':
            {
                // empty list
                if(data_collection.size() == 0)
                {
                    cout << "\n Unable to search - list is empty" << endl;
                }
                else
                {
                    // get user item to find
                    int selection {};
                    
                    cout << "\nEnter value to search for: ";
                    cin >> selection;
                    
                    int found_counter {};
                    
                    for(auto element : data_collection)
                    {
                        if(element == selection)
                            found_counter++;
                    }
                    
                    // display number of times item found (ONLY if the count is > 0)
                    if(found_counter > 0)
                        cout << endl << selection << " was found " << found_counter << " times." << endl;
                    else
                        cout << "\nThat number was not found in the list." << endl;        
                }               
                break;
            }
            case 'A':
            case 'a':
            {
                // use a do while loop here for checking for douplicate numbers if I want to add it.
                
                // get value from user
                int value_to_add {};
                cout << "Enter an integer to add to the list: ";
                cin >> value_to_add;
                
                if(!(allow_duplicate_entries == 'Y' || allow_duplicate_entries == 'y'))
                {
                    bool found_number_in_list {false};
                    
                    for(auto element : data_collection)
                    {
                        if(value_to_add == element)
                            found_number_in_list = true;
                    }
                    
                    if(found_number_in_list == true)
                    {
                        cout << "\nValue in list already - duplicate entries not allowed." << endl;
                        break;
                    }
                }
                
                data_collection.push_back(value_to_add);
                cout << value_to_add << " added" << endl;
                
                break;
            }
            case 'D':
            case 'd':
            {
                // is list empty?
                if(data_collection.size() == 0)
                {
                    cout << "\nUnable to remove a value - list is empty" << endl;
                    
                    break;
                }
                else
                {
                    // get number from use
                    int number_to_remove {};
                    
                    cout << "\nEnter the value to remove from the list: ";
                    cin >> number_to_remove;
                    
                    for(long unsigned int i {}; i < data_collection.size(); i++)
                    {
                        if(number_to_remove == data_collection.at(i))
                        {
                            // rmeoving item from the vector, using the iterator just add the index value to get your target element.
                            data_collection.erase(data_collection.begin() + i);
                            
                            cout << "\n" << number_to_remove << " removed" << endl;
                            break;
                        }
                    }
                    
                    cout << "\n" << number_to_remove << " was not found in the list" << endl;
                }
                
                break;
            }
            case 'C':
            case 'c':
            {
                // clear list
                data_collection.clear();
                cout << "\nList has been cleared" << endl;
                
                break;
            }
            case 'M':
            case 'm':
            {
                if(data_collection.size() == 0)
                {
                    cout << "\nUnable to calculate the mean - no data" << endl;
                }
                else
                {
                    // add the element values in the list up and divide by the number of elements in the list.
                    int count {};
                    
                    // get values from list
                    int running_value {};
                    
                    for(auto element : data_collection)
                    {
                        count++;
                        running_value += element;
                    }
                
                    // get mean value
                    double mean = static_cast<double>(running_value / count);
                    
                    // display mean number
                    cout << fixed << setprecision(1);
                    cout << "\nThe mean is: " << mean << endl;
                }
                
                break;
            }
            case 'S':
            case 's':
            {
                if(data_collection.size() == 0)
                {
                    cout << "\nUnable to determine the smallest number - list is empty" << endl;
                }
                else
                {
                    // keep track of the smallest number in a variable
                    int smallest_number { data_collection.at(0) };
                    
                    if(data_collection.size() > 1)
                    {
                        for(long unsigned int i {1}; i < data_collection.size(); i++)
                        {
                            if(smallest_number > data_collection.at(i))
                                smallest_number = data_collection.at(i);
                        }
                    }
                    
                    // display smallest number
                    cout << "\nThe smallest number is " << smallest_number << endl;
                }
                
                break;
            }
            case 'L':
            case 'l':
            {
                // is list empty?
                if(data_collection.size() == 0)
                {
                    cout << "\nUnable to determine the largest number - list is empty" << endl;
                }
                else
                {
                    // keep track of the lergest number
                    int largest_number { data_collection.at(0) };
                    
                    if(data_collection.size() > 1)
                    {
                        for(auto element : data_collection)
                        {
                            if(largest_number < element)
                                largest_number = element;
                        }
                    }
                    
                    // display the largest number
                    cout << "\nThe largest number is " << largest_number << endl;
                }
                
                break;
            }
            case 'Q':
            case 'q':
            {    
                quit_app = true;
                
                break;
            }
            default:
                cout << "\nUnknown selection, please try again" << endl;
        }
        
        if(quit_app == true)
            break;
    }
    
    cout << "\nGoodbye..." << endl << endl;
    
    return 0;
}