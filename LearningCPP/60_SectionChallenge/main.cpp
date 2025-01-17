#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // write a c++ program as follows:
     
    // - Declare 2 empty vectos of integers named vector1 and vector2, respectively
    vector<int> vector1;
    vector<int> vector2;
     
    // - Add 10 and 20 to vector1 dynamically using push_back
    vector1.push_back(10);
    vector1.push_back(20);
    
    // - Display the elements in vector1 using the at() method as well as its size using the size() method
    cout << "Vector1 elements:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "Vector1 size: " << vector1.size() << endl;
     
    // - Add 100 and 200 to vector2 dynamically using push_back
    vector2.push_back(100);
    vector2.push_back(200);
    
    // - Display the elements in vector2 using the at() method as well as its size using the size() method
    cout << "Vector2 elements:" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
 
    // - Declare an empty 2D vector call ed vector_2d
    // NOTE: remember, that a 2D vector is a vector of vector<int>
    vector<vector<int>> vector_2d;
     
    // - Add vector1 to vector_2d dyanmically using push_back
    vector_2d.push_back(vector1);
    
    // - Add vector2 to vector_2d dyanmically using push_back
    vector_2d.push_back(vector2);
    
    // - Display the elments in vector_2d using the at() method
    cout << "Vector_2D elements:" << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;
    cout << "vector_2d size:" << vector_2d.size() << endl;
    
    // - change vector1.at(0) to 1000
    vector1.at(0) = 1000;
    
    // - Display the elements in vector_2d again using the at() method
    cout << "Vector_2D elements:" << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;
    
    // - Display elements in vector1
    cout << "Vector1 elements:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    
    // ? What did you expect? did you get what you expected? what do you think happened?
    // 1000 in both at index 0 of vector1's data
    // ANSWER: its a deep copy so they are different so they have thier own values not sharing the pointer of vector 1
    
    
    cin.get();
    cin.get();
    
    return 0;
}