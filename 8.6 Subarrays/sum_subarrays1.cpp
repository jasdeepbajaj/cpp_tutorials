// This program finds the maximum sum subarray within a given array using a brute-force approach.
// Time complexity: O(n^3), where n is the size of the input array.

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

    // Variables to store the maximum sum, temporary sum, and indices of the subarray
    int temp_sum = 0, final_sum = INT_MIN, start = 0, end = 0;

    cout << "#############" << endl;

    // Outer loop to iterate through the array elements
    for (int i = 0; i < size; i++) {
        // Inner loop to consider all subarrays starting from the current element
        for (int j = i; j < size; j++) {
            temp_sum = 0;

            // Loop to calculate the sum of the current subarray
            for (int k = i; k <= j; k++) {
                cout << array[k] << " ";
                temp_sum = temp_sum + array[k];
            }

            // Check if the sum of the current subarray is greater than the maximum sum found so far
            if (temp_sum > final_sum) {
                final_sum = temp_sum;
                start = i; // Update start index of the maximum sum subarray
                end = j;   // Update end index of the maximum sum subarray
            }

            cout << endl;
        }
    }

    // Output the maximum sum of the subarray and its corresponding indices
    cout << "The maximum sum of subarray is " << final_sum << " between element at position " << start + 1 << " and " << end + 1 << endl;

    return 0;
}
