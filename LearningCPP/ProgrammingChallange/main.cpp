#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // = 140
    // 2*4 + 2*6 + 2*8 + 4*6 + 4*8 + 6*8 = 140
    // 8 + 12 + 16 + 24 + 32 + 48 = 140
    // 20 + 40 + 80 = 140
    // = 140
    vector<int> vec { 2, 4, 6, 8 };
    
    int result {};
    
    int index {};
    int targetIndex {index + 1};
    
    while(true)
    {
        auto vec_size = vec.size();
        if(vec_size == -1 || targetIndex > vec.size())
            break;
        else
        {
            int running_value {};
            
            for(int i {targetIndex}; i < vec.size(); i++)
            {
                running_value += vec[index] * vec[i];
                cout << "\nRunning value: " << running_value;
            }
            
            result += running_value;
            
            index++;
            targetIndex = index + 1;
        }
        
    }
    
    cout << "\n\nresult: " << result << endl;
    
    
    
    
    cout << endl;
    
    return 0;
}