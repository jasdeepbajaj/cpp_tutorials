#include <iostream>  
using namespace std;  

// Function to print the elements of an array
void printArray(int array[], int n) {
    cout << "[ ";  // Print opening bracket for array representation

    for (int i = 0; i < n; i++) {  // Loop through the array elements
        cout << array[i] << " ";  // Print each element of the array
    }

    cout << "]" << endl;  // Print closing bracket for array representation and move to the next line
}

// Function implementing the insertion sort algorithm
void insertionSort(int array[], int n) {
    cout << "Algorithm will be run for " << (n - 1) << " iterations" << endl;  // Output the number of iterations needed for sorting
        
    for (int i = 1; i < n; i++) {  // Loop through the array starting from the second element
        
        int current = array[i];  // Store the current element to be inserted
        int j = i - 1;  // Set a pointer to the previous element

        // Shift elements greater than the current element to the right
        while (array[j] > current && j >= 0) {
            array[j + 1] = array[j];  // Shift the element to the right
            j--;  // Move to the previous element
        }
        array[j + 1] = current;  // Place the current element in its correct position
        //we place the current element at j+1 position because the while loop ends at j-- and to get the correct location for current
        //we need to use j+1
        
        cout << "Array after iteration " << i << " :";  // Output the array after each iteration
        printArray(array, n);  // Call the function to print the array
    }
}

// Main function
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;  // Input the size of the array

    int array[n];  // Declare an array of size 'n'

    
    for (int i = 0; i < n; i++) {
        cout << "Enter element at index " << i << " of the array:";  // Prompt for entering elements
        cin >> array[i];  // Input elements into the array
    }

    cout << "Array Before Sorting: ";  // Output message indicating the array before sorting
    printArray(array, n);  // Call function to print the initial array

    insertionSort(array, n);  // Call the function to perform insertion sort

    cout << "Array After Sorting: ";  // Output message indicating the array after sorting
    printArray(array, n);  // Call function to print the sorted array
}
