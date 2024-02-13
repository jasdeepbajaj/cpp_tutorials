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

    const int N = 1e5+2;  
    int idx[N];

    for (int i = 0; i < N; i++) {
        idx[i] = -1;
    }

    // printArray(idx, N);
    int min_idx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int curr = array[i];
        if (idx[curr]==-1)
        {
            idx[curr] = i;
        }
        else
        {
            min_idx = min(idx[curr], min_idx);
        }
        
        
    }

    if (min_idx == INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<min_idx<<" is the first repeating element"<<endl;
    }
    
    
    

    return 0;
}
