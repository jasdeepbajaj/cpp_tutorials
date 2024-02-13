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

int missingNumber(int arr[], int n) 
    { 
        for (int i = 0; i < n; i++) {
            while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
                swap(arr[i], arr[arr[i] - 1]);
            }
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] != i + 1) {
                return i + 1;
            }
        }

        return n + 1;
    } 


// Main function
int main() {
    int n;
    cout << "Enter the n of the array: ";
    cin >> n;

    int array[n];
    cout << "Enter " << n << " elements for the array:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }

    printArray(array, n);

    int ans = missingNumber(array, n);

    cout<<ans;



    return 0;
}
