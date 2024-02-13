#include <bits/stdc++.h>
using namespace std;

// Function to print the elements of an array
void printArray(int array[], int n) {
    cout << "[ ";  // Print opening bracket for array representation

    for (int i = 0; i < n; i++) {  // Loop through the array elements
        cout << array[i] << " ";  // Print each element of the array
    }

    cout << "]" << endl;  // Print closing bracket for array representation and move to the next line
}

// Main function
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];
    cout << "Enter " << size << " elements for the array:\n";
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }

    printArray(array, size);

    if (size == 1) 
    {
        cout << "Only one element in the array." << endl;
        return 0;
    }

    int max_so_far = -1;
    int total_record_breaking_days = 0;

    // Loop through the array to find record-breaking days
    for (int i = 0; i < size; i++)
    {
        int curr = array[i];
        // Check if current day is a record-breaking day based on conditions
        if ((i==0 && curr>array[i+1]) || (i>0 && i<size-1 && curr>max_so_far && curr>array[i+1]) || (i==size-1 && curr>max_so_far))
        {
            total_record_breaking_days++;   
            cout<<curr<<" is a record breaking day"<<endl; // Display record-breaking day
        }
        max_so_far = max(curr, max_so_far); // Update maximum so far
    }
    
    cout<< "Total record breaking days: " << total_record_breaking_days << endl; // Display total record-breaking days
    
    return 0;
}
