#include <iostream>
using namespace std;

// Function to find the first occurrence of the target in the array
int first_occurrence(int array[], int size, int index, int target) {
    // If index reaches the end of the array, return -1 (not found)
    if (index == size) {
        return -1;
    }
    
    // If the current element matches the target, return the index
    if (array[index] == target) {
        return index;
    } else {
        // Otherwise, recursively search in the rest of the array
        return first_occurrence(array, size, index + 1, target);
    }
}

// Function to find the last occurrence of the target in the array
int last_occurrence(int array[], int size, int target) {
    // If size becomes 0, return -1 (not found)
    if (size == 0) {
        return -1;
    }
    
    // If the last element matches the target, return its index
    if (array[size - 1] == target) {
        return size - 1;
    } else {
        // Otherwise, recursively search in the array excluding the last element
        return last_occurrence(array, size - 1, target);
    }
}

int main() {
    int arr[] = {1, 25, 3, 25, 5};
    int n = 5; // size of array
    int target = 2;
    int i = 0; // initializing index
    // Output the index of the first occurrence of the target
    cout << "First Occurrence: " << first_occurrence(arr, n, i, target) << endl;
    // Output the index of the last occurrence of the target
    cout << "Last Occurrence: " << last_occurrence(arr, n, target) << endl;
    return 0;
}
