#include<iostream>
#include<climits>
using namespace std;

// Function to check if an array is sorted in non-decreasing order
bool sorted(int arr[], int size){

    // Base condition: if the size of the array is 1, it is considered sorted
    if (size == 1)
    {
        return true;
    }
    
    // Recursive call to check if the rest of the array is sorted
    bool restArray = sorted(arr+1, size-1);

    // Check if the current element is less than the next element and the rest of the array is sorted
    if (arr[0] < arr[1] && restArray) 
    {
        return true; // If condition met, return true indicating sorted
    }
    else
    {
        return false; // Otherwise, return false indicating not sorted
    }
}

int main() {

    // Test array
    int arr[] = {1,5,3,4,5};

    // Call the sorted function and print the result
    cout << sorted(arr, 5) << endl;

    return 0;
}
