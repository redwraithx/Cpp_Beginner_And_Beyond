#include <iostream>
#include <iomanip>
#include <string>

using namespace std; // will replace this with std:: in the future

int main()
{
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1}; // Apple
    string s6 {s1, 0, 3}; // App
    string s7 (10, 'X'); // XXXXXXXXXX
    
    cout << "s0: " << s0 << endl;       // NO garbage
    cout << "s0.length(): " << s0.length() << endl;       // empty string
    
    // Initialization
    cout << "\nInitialization" << "\n----------------------------------------------------" << endl;
    cout << "s1 is initialized to: " << s1 << endl;
    cout << "s2 is initialized to: " << s2 << endl;
    cout << "s3 is initialized to: " << s3 << endl;
    cout << "s4 is initialized to: " << s4 << endl;
    cout << "s5 is initialized to: " << s5 << endl;
    cout << "s6 is initialized to: " << s6 << endl;
    cout << "s7 is initialized to: " << s7 << endl;
    
    
    // Comparisons
    cout << "\nComparison" << "\n---------------------------------------------------------" << endl;
    cout << boolalpha;
    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;           // true,    Apple == Apple
    cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;           // false,   Apple == Banana
    cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;           // true,    Apple != Banana
    cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;             // true,    Apple < Banana
    cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;             // true,    Banana > Apple
    cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;             // false,   apple > Apple
    cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl; // true,    Apple == Apple
    
    
    // Assignment
    cout << "\nAssignment" << "\n---------------------------------------------------------" << endl;
    
    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl;                        // Watermelon
    
    s2 = s1;
    cout << "s2 is now: " << s2 << endl;                        // Watermelon
    
    s3 = "Frank";
    cout << "s3 is now: " << s3 << endl;                        // Frank
    
    s3[0] = 'C';    // Crank
    cout << "s3 changed first letter to 'C': " << s3 << endl;   // Crank
    
    s3.at(0) = 'P';
    cout << "s3 change first letter to 'P': " << s3 << endl;    // Prank
    
    
    // Concatenation
    cout << "\nConcatenation" << "\n------------------------------------------------------------------" << endl;
    
    s3 = "Watermelon"; // this assignment is not required or used but was apart of the course
    
    s3 = s5 + " and " + s2 + " juice";  // Apple and Banana juice
    cout << "s3 is now: " << s3 << endl;    // Apple and Banana juice
    
    // compiler error, dont do this, as your using c-style literals and adding them, you need to use concat using the c-style function NOT the +
    //s3 = "nice " + " cold " + s5 + "juice";     
    
    
    // For Loop
    cout << "\nFor Looping" << "\n------------------------------------------------------------------" << endl;
    
    s1 = "Apple";
    for(size_t i {0}; i < s1.length(); ++i)
        cout << s1.at(i);   // or you can use the subscript method s1[i], NOTE: that using .at() will give errors if there ever are any where as [i] will never give you a direct error
    
    cout << endl;
    
    
    // Range-based for Loop
    for(char c : s1)
        cout << c << endl;
        
    cout << endl;
    
    
    // substring
    cout << "\nSubstring" << "\n-----------------------------------------------" << endl;
    
    s1 = "This is a test";
    
    cout << "s1.substr(0,4): " << s1.substr(0,4) << endl;       // This
    cout << "s1.substr(5,2): " << s1.substr(5,2) << endl;       // is
    cout << "s1.substr(10, 4): " << s1.substr(10,4) << endl;    // test
    
    
    // erase
    cout << "\nErase" << "\n----------------------------------------------------" << endl;
    
    s1 = "This is a test";
    s1.erase(0,5);   // Erase This from s1 results in "This is a test", which will be: is a test
    cout << "s1 is now: " << s1 << endl;    // is a test
    
    
    // getline
    cout << "\nGetline" << "\n--------------------------------------------------------" << endl;
    
    string full_name {};
    
    cout << "Enter your full name: ";
    getline(cin, full_name);
    
    cout << "Your full name is: " << full_name << endl;
    
    
    // find
    cout << "\nfind" << "\n-----------------------------------------------------------" << endl;
    
    s1 = "The secret word is Boo";
    string word {};
    
    cout << "Enter the word to find: ";
    cin >> word;
    
    size_t position = s1.find(word);
    
    if(position != string::npos) // is word found is NOT equal to No Position, you found the word
        cout << "Found " << word << " at position: " << position << endl;
    else
        cout << "Sorry, " << word << " not found" << endl;
    
    
    
    
    
    
    cout << endl;
    
    return 0;
}