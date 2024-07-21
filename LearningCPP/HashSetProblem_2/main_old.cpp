#include <iostream>
#include <unordered_set>
#include <vector>


using namespace std;

void PrintItemsInSet(unordered_set<int> set)
{
    // Display the items in the set using vector<int>
    vector<int> numbers(set.begin(), set.end());
    
    cout << "Numbers in unordered set: ";
    for(int i = 0; i < (int)numbers.size(); ++i)
    {
        if(i == 0)
        {
            cout << numbers[i];
        }
        else
        {
            cout << ", " << numbers[i];
        }
    }
    
    cout << endl;
}


int main()
{
    unordered_set<int> numberSet;
    
    // insert items into set
    numberSet.insert(10);
    numberSet.insert(20);
    numberSet.insert(30);
    numberSet.insert(40);
    
    int numberToFind = 20; // item in set
    //int numberToFind = 22; // item not in set
    
    // retreive item from set
    auto iter = numberSet.find(numberToFind);
    if(iter == numberSet.end())

    if(iter == numberSet.end())
    {
        cout << "Not found sorry :(" << endl;
    }
    else
    {
        cout << "20 has been found!" << endl;
    }

    
    if(iter != numberSet.end())
    {
        // remove found item from set
        numberSet.erase(20);
        cout << "20 has been removed from out set" << endl;
        
        
        // Display the items in the set using vector<int>
        PrintItemsInSet(numberSet);
        
    }
    
    return 0;
}