// This program finds the maximum sum subarray within a given array using Kadane's algorithm.
// Time complexity: O(n), where n is the size of the input array.

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input size of the array
    int size;
    cin >> size;

    // Initialize an array of given size
    int array[size];

    // Input elements into the array
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int currSum = 0; // Variable to store current sum of subarray
    int max_so_far = INT_MIN; // Variable to store the maximum sum found

    cout << "#############" << endl;

    // Iterate through the array using Kadane's algorithm
    for (int i = 0; i < size; i++) {
        currSum = currSum + array[i];
        
        // If the current sum becomes negative, reset it to 0
        if (max_so_far < currSum) {
            max_so_far = currSum;
        }

        if (currSum<0)
        {
            currSum = 0;
        }
        
    }

    // Output the maximum sum of the subarray
    cout << "The maximum sum of subarray is " << max_so_far << endl;

    return 0;
}
