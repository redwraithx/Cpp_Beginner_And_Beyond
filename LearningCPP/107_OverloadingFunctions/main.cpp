#include <iostream>
#include <string>
#include <vector>


using namespace std;

void print(int num);
void print(double num);
void print(string str_a);
void print(string str_a, string str_b);
void print(vector<string> str_vec);

void print(int num)
{
    cout << "Printing int: " << num << endl;
}

void print(double num)
{
    cout << "Printing double: " << num << endl;
}

void print(string str_a)
{
    cout << "Printing string: " << str_a << endl;
}

void print(string str_a, string str_b)
{
    cout << "Printing 2 strings: " << str_a << " and " << str_b << endl;
}

void print(vector<string> str_vec)
{
    cout << "Printing vector of strings: ";
    for(auto str : str_vec)
        cout << str + " ";
        
    
    cout << endl;
}


int main()
{
    // print int
    print(100);
    
    // print string
    // NOTE: character is always promoted to an int should print 65 ASCII ('A') value
    print('a');
    
    // print double
    print(123.5);

    // print float
    // NOTE: float is promoted to a double
    print(123.5F);
    
    // print C-Style string
    // NOTE: C-Style Strings are promoted to a string object
    print("C++ string");
    
    // print string object
    string s {"C++ string"};
    print(s);
    
    // printing vector<string>
    vector<string> three_stooges {"larry", "Moe", "Curly"};
    print(three_stooges);
    
    // print 2 strings
    string a {"Frank"};
    string b {"Joe"};
    print(a, b);
    
    
    cout << endl;
    
    return 0;
}