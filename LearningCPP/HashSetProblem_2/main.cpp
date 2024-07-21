#include <iostream>
#include <unordered_set>
#include <vector>


using namespace std;

bool HasItemInSet(int item, unordered_set<int> set)
{
    if(set.empty())
        return false;
        
    auto iter = set.find(item);
    
    if(iter == set.end())
    {
        cout << item << " was NOT found in the set." << endl;
    }
    else
    {
        cout << item << " was found in the set." << endl;
    }
    
    return iter != set.end() ? true : false;
}

void AddItemToSet(int item, unordered_set<int> set)
{
    set.insert(item);
    
    cout << item << " has been inserted into the set." << endl;
}

void RemoveItemFromSet(int item, unordered_set<int> set)
{
    set.erase(item);
    
    cout << item << " has been removed from the set." << endl;
}

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
    
    cout << "Hash Set using functions - Starts here -" << endl;

    unordered_set<int> numberSet;
    
    // insert items into set
    numberSet.insert(10);
    numberSet.insert(20);
    numberSet.insert(30);
    numberSet.insert(40);
    
    int numberToFind = 20; // item in set
    //int numberToFind = 22; // item not in set
    
    // retreive item from set
    bool result = HasItemInSet(numberToFind, numberSet);
    
    
    if(result)
    {
        // remove found item from set
        RemoveItemFromSet(numberToFind, numberSet);

        PrintItemsInSet(numberSet);
    }
    
    
    cout << "\nHash Set using functions - Ends here -" << endl;
    
    
    
    
    return 0;
}