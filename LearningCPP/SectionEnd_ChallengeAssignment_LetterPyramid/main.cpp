// NOTE: Instructors solution at the bottom


/*
 * A Letter Pyramid program
 * 
 * using std::string, take a prompt from a user, and use that string to create the pyramid
 * 
 * Example: KEK is entered
 * 
 * the result is:
 * 
 *   k
 *  kek
 * kekek
 * 
 * no matter the size the result will be the same just on a different scale
 * 
 * example of a larger input: LIFEOFBRIAN
 * 
 *           L
 *          LIL
 *         LIFIL
 *        LIFEFIL
 *       LIFEOEFIL
 *      LIFEOFOEFIL
 *     LIFEOFBFOEFIL
 *    LIFEOFBRBFOEFIL
 *   LIFEOFBRIRBFOEFIL
 *  LIFEOFBRIAIRBFOEFIL
 * LIFEOFBRIANAIRBFOEFIL
 * 
 * 
 * NOTE: Breaking down the problem into smaller more manageable parts, will make this easier
 * 
 * Question 1:
 *  Which C++ loop(s) did you use and why?
 * 
 * Answer:
 * 
 *  
 * Question 2:
 *  How did you handle displaying the leading spaces in each row of the pyramid?
 * 
 * Answer:
 *  
 * 
 * Question 3:
 *  Now that you completed the assignment, how might you approach the problem differently if you had to solve it again?
 * 
 * Answer:
 *  
 * 
 * 
 * Attention: make sure to submid your solution when you submit it.
 */


#include <iostream>
#include <string>

// trying to use only what i need for using statements and not the whole class as a challenge for my self.
using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{
    // store user input
    string input_data {};
    
    // get user input
    do
    {
        cout << "Enter string to process: ";
        getline(cin, input_data);
    } while(input_data.length() <= 0);
    
    // set variables that will carry over per loop
    size_t current_index {};
    size_t length_to_center_minus_one { input_data.length() - 1 };
    size_t final_string_length { length_to_center_minus_one + input_data.length() };
    size_t current_spaces_counter {};
    
    // get number of loops to complete run
    size_t final_loop_count {};
    for(int i {}, j {1}; i < static_cast<int>(input_data.length()); i++, j++)
    {
        final_loop_count = i + 1;
    }
    cout << "final loop count: " << final_loop_count << endl;
    
    bool processing_string { true };
    
    while(processing_string)
    {
        // update spaces count but only up to half the total string size minus 1, or its 0 spaces
        if(current_index  < final_string_length)
            current_spaces_counter = ((length_to_center_minus_one - current_index) >= 0 ? length_to_center_minus_one - current_index : 0);
        else
            current_spaces_counter = 0;
        
        // set space string size
        string spaces ((current_spaces_counter > 0 ? current_spaces_counter : 0), ' ');
        
        // variables for this loops iteration
        string current_string {};
        string left_side_string {};
        string right_side_string {};
        
        // process current index of the input data
        if(current_index == 0)
        {
            left_side_string += input_data.at(0);
        }
        else
        {
            // get left side data
            for(char c : input_data.substr(0, current_index + 1))
            {
                left_side_string += c;
            }
            
            string get_right_sidestring { left_side_string, 0, (left_side_string.length() - 1 > 0 ? left_side_string.length() - 1 : left_side_string.length())};
            
            // get right side data
            for(int i { static_cast<int>(get_right_sidestring.length() - 1) }; i >= 0; i--)
            {
                right_side_string += get_right_sidestring.at(i);
            }
        }
        
        // create the new string
        current_string = spaces + left_side_string + right_side_string;
        
        // display the full string
        cout << current_string << endl;
        
        current_index++;
        
        // test for end case
        if(current_index >= final_loop_count)
        {
            processing_string = false;
        }
            
    }
    
    cout << endl;
    
    return 0;
}



// given solution

/*

// Letter Pyramid
// Written by Frank J. Mitropoulos

#include <iostream>
#include <string>


int main()
{
    std::string letters{};

    std::cout << "Enter a string of letters so I can create a Letter Pyramid from it: ";
    getline(std::cin, letters);

    size_t num_letters = letters.length();

    int position {0};

    // for each letter in the string
    for (char c: letters) {

        size_t num_spaces = num_letters - position;
        while (num_spaces > 0) {
            std::cout << " ";
            --num_spaces;
        }

        // Display in order up to the current character
        for (size_t j=0; j < position; j++) {
            std::cout << letters.at(j);
        }

        // Display the current 'center' character
        std::cout << c;

        // Display the remaining characters in reverse order
        for (int j=position-1; j >=0; --j) {
            // You can use this line to get rid of the size_t vs int warning if you want
            auto k = static_cast<size_t>(j);
            std::cout << letters.at(k);
        }

        std::cout << std::endl; // Don't forget the end line
        ++position;
    }

    return 0;
}
 */