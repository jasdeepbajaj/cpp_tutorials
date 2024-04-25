#include <iostream>
#include <vector>

using namespace std;

int main(){

    // Declare a vector of integers.
    vector<int> v;

    // Add elements to the vector using push_back.
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Loop through the vector using index and print elements.
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    
    // Declare an iterator to loop through the vector.
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";  // Dereference the iterator to get the value
    }
    cout << endl;

    // Use range-based for loop to iterate over the vector.
    for (auto element: v){
        cout << element << " ";
    }
    cout << endl;
    
    // Remove the last element from the vector.
    v.pop_back();

    // Create another vector, initializing all elements to 50.
    vector<int> v2(3, 50);

    // Swap the contents of v and v2.
    swap(v, v2);

    // Output the elements of v after the swap.
    for (auto element: v){
        cout << element << " ";
    }
    cout << endl;

    // Output the elements of v2 after the swap.
    for (auto element: v2){
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
