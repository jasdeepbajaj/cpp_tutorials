#include <bits/stdc++.h> // Includes all standard libraries

using namespace std;  

// Function to print the elements of an array
void printArray(int array[], int n) {
    cout<<"[ ";  // Print opening bracket for array representation

    for (int i = 0; i < n; i++) {  // Loop through the array elements
        cout << array[i] << " ";  // Print each element of the array
    }

    cout << "]" << endl;  // Print closing bracket for array representation and move to the next line
}


// Main function
int main() {

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int array[n];
    cout << "Enter " << n << " elements for the array:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }

    cout << "Array: ";
    printArray(array, n);

    int previous_diff = array[1] - array[0]; // Calculate the difference between the first two elements
    int temp_max_len = 2; // Initialize temporary maximum length of consecutive elements with the same difference
    int final_max_len = 2; // Initialize final maximum length of consecutive elements with the same difference
    int j = 1; // Start from the second element of the array

    // Loop through the array to find the longest sequence with the same difference
    while ( j<(n-1) )
    {
        int current_diff = array[j+1]-array[j]; // Calculate the difference between consecutive elements

        if (current_diff == previous_diff) // If the difference is the same as the previous difference
        {
            temp_max_len++; // Increment the length of the current sequence
        }
        else // If the difference is different
        {
            previous_diff = current_diff; // Update the previous difference
            temp_max_len = 2; // Reset the length to 2 (as there are at least two elements with different differences)
        }
        
        final_max_len = max(temp_max_len, final_max_len); // Update the final maximum length if temp_max_len is greater
        j++; // Move to the next element in the array
    }

    // Print the length of the longest sequence with the same difference
    cout << "The length of the longest sequence with the same difference is: " << final_max_len << endl;
    cout << "Thank you for using the program!" << endl;
    
    return 0; // Return 0 to indicate successful completion of the program
}
