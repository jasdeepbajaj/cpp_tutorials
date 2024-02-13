#include <bits/stdc++.h>
using namespace std;

// Function to perform selection sort on an array
void selectionSort(int array[], int n){
    // Traverse through all elements of the array
    for (int i = 0; i < n-1; i++){
        // Assume the current index has the minimum value
        int min_idx = i;
        
        // Find the index of the minimum element in the unsorted part of the array
        for (int j = i+1; j < n; j++){
            if (array[j] < array[min_idx]){
                // If a smaller element is found, update the index of the minimum element
                min_idx = j;
            }
        }
        
        // Swap the found minimum element with the first element
        int temp = array[min_idx];
        array[min_idx] = array[i];
        array[i] = temp;
    }
}

// Main function
int main(){
    int n;
    // Input the size of the array from the user
    cout << "Enter the size of array that you want: ";
    cin >> n;

    int array[n];

    // Input elements into the array
    for (int i = 0; i < n; i++){
        cout << "Enter element " << i << " : ";
        cin >> array[i];
    }

    // Call the selectionSort function to sort the array
    selectionSort(array, n);
    
    // Display the sorted array
    cout << "Array after sorting: "; 
    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
