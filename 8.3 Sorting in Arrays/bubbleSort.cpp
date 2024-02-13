#include<bits/stdc++.h> // Include necessary libraries

using namespace std;

// Function to perform bubble sort on an array
void bubbleSort(int array[], int n){

    bool swapped; // Flag to track if any elements were swapped

    // Loop through the array
    for (int i = 0; i < n-1; i++){
        swapped = false; // Initialize swapped as false for each pass
        // Iterate through the unsorted part of the array
        for (int j = 0; j < n-i-1; j++){
            // If the current element is greater than the next element, swap them
            if (array[j] > array[j+1]){
                swap(array[j], array[j+1]);
                swapped = true; // Set swapped to true as elements were swapped
            }    
        }

        // If no elements were swapped in this pass, the array is already sorted
        if (!swapped){
            break; // Break out of the loop
        }
    }
}

int main(){
    int n;
    // Input the size of the array from the user
    cout << "Enter the size of array that you want: ";
    cin >> n;

    int array[n]; // Declare an array of size 'n'

    // Input elements into the array
    for (int i = 0; i < n; i++){
        cout << "Enter element " << i << " : ";
        cin >> array[i]; // Input each element of the array
    }

    bubbleSort(array, n); // Call the bubbleSort function to sort the array

    // Display the sorted array
    cout << "Array after sorting: "; 
    for (int i = 0; i < n; i++){
        cout << array[i] << " "; // Output each element of the sorted array
    }
    cout << endl;

    return 0;
}
