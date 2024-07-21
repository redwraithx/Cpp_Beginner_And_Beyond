#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Type 1: 1 to 10" << endl;
    for(int i {1} ; i <= 10 ; i++)
        cout << i << endl;
        
    cout << "\nType 2: count by 2" << endl;
    for(int i {1} ; i <= 10 ; i+=2)
        cout << i << endl;
        
    cout << "\nType 3: count down" << endl;
    for(int i {10} ; i > 0 ; i--)
        cout << i << endl;

    
    cout << "blast off!!!" << endl;
    

    cout << "\nType 4: count from 10 by 10 up to 100" << endl;
    for(int i {10} ; i <= 100 ; i += 10)
        cout << i << endl;
    
    cout << "\nType 5: using modulo only if things are divisible by 15" << endl;
    for(int i {10}; i <= 100 ; i+=10)
        if(i % 15 == 0)
            cout << i << endl;

    cout << "\nType 6: using comma operator" << endl;
    for(int i {1}, j {5} ; i <= 5 ; i++, j++)
        cout << i << " + " << j << " = " << (i + j) << endl;
    
    cout << "\nType 7: display data like its in a table" << endl;
    for(int i {1} ; i <= 100 ; i++)
    {
        cout << i;
        if(i % 10 == 0)
            cout << endl;
        else
            cout << " ";
    }
    
    cout << "\nType 8: display data like its in a table using a turnary" << endl;
    for(int i {1} ; i <= 100 ; i++)
    {
        cout << i << ((i % 10 == 0) ? "\n" : " ");
    }

    cout << "\nType 9: using vector to loop its data" << endl;
    vector<int> nums { 10, 20, 30, 40, 50 };
    // you can use just unsigned implicitly or use unsigned int explicitly stating it.
    for(unsigned int i {0} ; i < nums.size() ; i++)
    {
        cout << nums[i] << endl;
    }


    cout << endl;
    
    return 0;
}