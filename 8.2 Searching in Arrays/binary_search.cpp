#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int start = 0; // Setting the starting index at the first element of the array
    int end = n - 1; // Setting the ending search index at the last element of the array

    while (start <= end) {
        int mid = (start + end) / 2; // Calculating the mid index of the current start and end elements

        if (arr[mid] == key) { // If mid element is the same as the searched key
            return mid; // Return the key
        } else if (arr[mid] > key) { // If mid element is greater than the key
            end = mid - 1; // Ignore the later part of the array and move the end pointer to mid - 1
        } else { // If mid element is smaller than the key
            start = mid + 1; // Ignore the first half of the current array and move the search pointer to mid + 1
        }
    }
    return -1; // Return -1 when the element is not found
}

int main() {
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter element number " << (i) << ": ";
        cin >> array[i];
    }
    
    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    int result = binarySearch(array, n, key);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
