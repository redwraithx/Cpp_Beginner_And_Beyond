#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // vector <char> vowels;        // empty
    // vector <char> vowels(5);     // 5 elements initialized to ZERO
    vector <char> vowels{'a', 'e', 'i', 'o', 'u'}; // 5 elements initialized to different values
    
    // show values at index 0 & 4
    cout << vowels[0] << endl;
    cout << vowels[4] << endl << endl;
    
    // vector<int> test_scores(3);          // 3 elements all initialized to zero
    // vector<int> test_scores(3, 100);     // 3 elements all initialized to 100
    vector<int> test_scores {100, 98, 89};
    
    // show the 3 values of test_scores using Array syntax
    cout << "\nTest Scores using array syntax:" << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;
    
    // show the 3 values of test_scores using Vector syntax
    cout << "\nTest Scores using vector syntax:" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "\nThere are " << test_scores.size() << " scores in the vector." << endl;
    
    cout << "\nEnter 3 values: ";
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);
    
    cout << "Updated test scores:" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    
    // dynamic vector
    cout << "Enter a test score to add to the vector: ";
    
    int score_to_add {0};
    cin >> score_to_add;
    test_scores.push_back(score_to_add);
    
    
    cout << "Enter another test score to add: ";
    cin >> score_to_add;
    
    test_scores.push_back(score_to_add);
    
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;
    
    
    
    // 2 dimensional vector
    vector <vector<int>> movie_rattings
    {
        {1, 2, 3, 4},
        {1, 2, 4, 5},
        {1, 3, 4, 5}
    };
    
    cout << "\nHere are the movie ratings for reviewer #1 using array syntax:" << endl;
    cout << movie_rattings[0][0] << endl;
    cout << movie_rattings[0][1] << endl;
    cout << movie_rattings[0][2] << endl;
    cout << movie_rattings[0][3] << endl;
    
    cout << "\nHere are the movie ratings for the reviewer #1 using vector syntax:" << endl;
    cout << movie_rattings.at(0).at(0) << endl;
    cout << movie_rattings.at(0).at(1) << endl;
    cout << movie_rattings.at(0).at(2) << endl;
    cout << movie_rattings.at(0).at(3) << endl;
    
    
    
    
    
    
    
    cin.get();
    cin.get();
    
    return 0;
}