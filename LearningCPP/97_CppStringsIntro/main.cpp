#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;


int main()
{
    // an example of how you could use a string on intialization and declaration.
    // NOTE: c style strings will be converted to a c++ string
    
    cout << "Part 1\n-------------" << endl;
    // NOTE: Dont print unintialized variables as they will hold garbage data most likely.
    string s1;                  // Empty 
    cout << "s1 = un-initialized data (garbage data)" << endl;
    
    string s2 { "Frank" };      // Frank
    cout << "s2 = " << s2 << endl;
    
    string s3 { s2 };           // Frank
    cout << "s3 = " << s3 << endl;
    
    string s4 { "Frank", 3 };   // Fra
    cout << "s4 = " << s4 << endl;
    
    string s5 { s3, 0, 2 };     // Fr
    cout << "s5 = " << s5 << endl;
    
    string s6 (3, 'X');         // XXX
    cout << "s6 = " << s6 << endl << endl;
    
    
    cout << "\nPart 2 - Assignment\n-------------" << endl;
    // example of String Assignment
    string str1;
    str1 = "C++ Rocks!";
    cout << "str1 equals: " << str1 << endl;
    
    string str2 { "Hello" };
    cout << "str2 equals: " << str2 << endl;
    
    str2 = str1;
    cout << "str2 now euals: " << str2 << endl << endl;
    
    
    cout << "\nPart 3 - Concatenation\n-------------" << endl;
    string part1 { "C++" };
    string part2 {"is a powerful"};
    
    string sentence;
    
    sentence = part1 + " " + part2 + " language";
    cout << "sentence equals: " << sentence << endl << endl;
    
    // NOTE: dont do this as you only have 2 c-style literals
    //sentence = "C++" + " is powerful"; // this is illegal
    
    
    cout << "\nPart 4a - Accessing characters [] and at() method\n-------------" << endl;
    string str_2 {"Frank"};
    
    cout << "s2[0] = " << s2[0] << endl;        // F
    cout << "s2.at(0) = " << s2.at(0) << endl;  // F
    
    str_2[0] = 'f';        // frank
    cout << "changed index 0 to 'f', str_2 = " << str_2 << endl;
    
    str_2.at(0) = 'p';     // prank
    cout << "changed index 0 to 'p', str_2 = " << str_2 << endl << endl;
    
    
    
    cout << "\nPart 4b - Accessing characters [] and at() method cont.\n-------------" << endl;
    string str_1 { "Frank" };
    
    // prints Frank but vertically
    for(char c: str_1)
        cout << c << endl;
    
    cout << endl;
    // prints Frank but vertically and using its ascii value
    // NOTE: that the 0 at the end is the null character value
    for(int i: str_1)
        cout << i << endl << endl;
    
    
    
    cout << "\nPart 5 - Comparing\n-------------" << endl;
    // using ==, !=, >, >=, <, <=
    /*
     * NOTE: objects are compared character by character lexically.
     * 
     * Can compare:
     *      - two std::string objects
     *      - std::string object and C-Style String Literal
     *      - std::string object and C-Style String Variable
     */
    
    string s_1 {"Apple"};
    string s_2 {"Banana"};
    string s_3 {"Kiwi"};
    string s_4 {"apple"};
    string s_5 {s_1};
    
    cout << boolalpha;
    cout << "s_1 == s_5 = \t" << (s_1 == s_5) << endl;                   // true
    cout << "s_1 == s_2 = \t"<< (s_1 == s_2) << endl;                    // false
    cout << "s_1 != s_2 = \t"<< (s_1 != s_2) << endl;                    // true
    cout << "s_1 < s_2 = \t" << (s_1 < s_2) << endl;                     // true
    cout << "s_2 > s_1 = \t" << (s_2 > s_1) << endl;                     // true
    cout << "s_4 < s_5 = \t" << (s_4 < s_5) << endl;                     // false
    cout << "s_1 == Apple = \t" << (s_1 == "Apple") << endl << endl;     // true
    
    
    
    cout << "\nPart 6 - Substring: substr()\n-------------" << endl;
    // extracts a substring from a std::string
    // use case: object.substr(start_index, length);
    s_1 = "This is a test";
    
    cout << "s_1.substr(0,4) = \t" << s_1.substr(0, 4) << endl;                 // This
    cout << "s_1.substr(5,2) = \t" << s_1.substr(5,2) << endl;                  // is
    cout << "s_1.substr(10,4) = \t" << s_1.substr(10,4) << endl << endl;        // test
    
    
    
    cout << "\nPart 7 - Searching: find()\n-------------" << endl;
    /*
     * find() returns the index of the substring in a std::string
     * use case: object.find(search_string);
     */
    cout << "s_1.find(\"This\") = " << s_1.find("This") << endl;        // 0
    cout << "s_1.find(\"is\") = " << s_1.find("is") << endl;            // 2
    cout << "s_1.find(\"test\") = " << s_1.find("test") << endl;        // 10
    cout << "s_1.find('e') = " << s_1.find('e') << endl;                // 11
    cout << "s_1.find(\"is\", 4) = " << s_1.find("is", 4) << endl;      // 5 - starts at the index given: in this case was 4
    cout << "s_1.find(\"XX\") = " << s_1.find("XX") << endl << endl;    // string::npos (no position found)
    
    
    cout << "\nPart 8 - Removing Characters: erase() and clear()\n-------------" << endl;
    /*
     * erase() and clear() removes a substring of characters from a std::string
     * use case: object.erase(start_index, length);
     */
    s_1.erase(0, 5);
    cout << "s_1.erase(0, 5) = " << s_1 << endl;       // is a test
    s_1.erase(5,4);
    cout << "s_1.erase(5,4) = " << s_1 << endl;        // is a

    s_1.clear();                                        // empties string s_1
    cout << "s_1 = " << s_1 << endl << endl;



    cout << "\nPart 9 - Other useful methods but its just the surface\n-------------" << endl;
    /*
    * string.length() returns the length of the string
    * use case: int value = object.length();
    * 
    * compound contatenation operation
    * string += string;
    * use case: object += string object || string literal
    */
    s1 = "Frank";
    cout << "s1.length() = " << s1.length() << endl;   // 5

    s1 += " James";

    cout << "s1 += \"James\" = " << s1 << endl;
    cout << "s1.length() = " << s1.length() << endl << endl;
    
    
    
    cout << "\nPart 10 - Input >> and getline()\n-------------" << endl;
    /*
     * reading std::string from cin
     */
    s1.clear();
    cout << "Enter a string: ";
    cin >> s1; // Hello there only accepts up to the first space
    
    cout << "cin #1: " << s1 << endl; // Hello;
    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    cout << "Enter a new string: ";
    getline(cin, s1); // read entire line until \n
    
    cout << "cin #2: " << s1 << endl;
    
    
    /*
     * getline(cin, string, delimiter)
     * use case: string data will continue to be added until the delimiter value is entered and return/enter is used.
     */
    cout << "Enter a string (use x to end the string): ";
    getline(cin, s1, 'x'); // this isx
    // NOTE: this will keep taking in data until the 'x' is present in the string
    cout << "cin #3: " << s1 << endl << endl;
    
    
    cout << endl;
    
    return 0;
}