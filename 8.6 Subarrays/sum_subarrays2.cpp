// This program finds the maximum sum subarray within a given array using a cumulative sum approach.
// Time complexity: O(n^2), where n is the size of the input array.

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

    // Array to store cumulative sums, initialized with the first element as 0
    int cummSum[size + 1];
    cummSum[0] = 0;

    // Calculate cumulative sums of the elements
    for (int i = 1; i < size + 1; i++) {
        cummSum[i] = cummSum[i - 1] + array[i - 1];
    }
    
    // Variables to store the maximum sum, and indices of the subarray
    int final_sum = INT_MIN, start = 0, end = 0;

    cout << "#############" << endl;

    // Loop to consider all possible subarrays and find the maximum sum
    for (int right = 1; right <= size; right++) {
        int temp_sum = 0;
        for (int left = 0; left < right; left++) {
            // Calculate the sum of the subarray using cumulative sums
            temp_sum = cummSum[right] - cummSum[left];
            
            // Update maximum sum and corresponding indices if a greater sum is found
            if (temp_sum > final_sum) {
                final_sum = temp_sum;
                start = left;
                end = right - 1; // Adjust end index by subtracting 1 to get the correct index
            }
        }
    }

    // Output the maximum sum of the subarray and its corresponding indices
    cout << "The maximum sum of subarray is " << final_sum << " between element at position " << start << " and " << end << endl;

    return 0;
}
