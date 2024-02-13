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

    int S;
    cout << "Enter the sum of SubArray S that you want: ";
    cin >> S;

    int left = 0;
    int right = 0;

    int current_sum = 0;
    bool found=false;

    while (right<n)
    {
        current_sum+=array[right];
        

        while (current_sum>S)
        {
            current_sum-=array[left];
            left++;
        }
        if (current_sum==S && left<=right)
        {
            cout<<(left+1)<<" "<<(right+1)<<endl;
            found = true;
            return 0;
        }
        right++;
    }

    if (!found)
    {
        cout<<"Could not find such subarray"<<endl;
    }
    

    
     
    

    // int current_sum = array[0];
    // int start = 0;
    // int end = 1;
    // // int i = 1;
    // bool found = false;

    // while (end<n)
    // {
    //     if (current_sum<S)
    //     {
    //         current_sum+=array[end];
    //         end++;
    //     }
    //     else if (current_sum>S)
    //     {
    //         current_sum-=array[start];
    //         start++;
    //     }
    //     else
    //     {
    //         found=true;
    //         break;
    //     }
    // }

    // if (found) {
    //     cout << "Subarray found from index " << start << " to " << end - 1 << endl;
    //     cout << "Elements are: ";
    //     for (int i = start; i < end; i++) {
    //         cout << array[i] << " ";
    //     }
    //     cout << endl;
    // } else {
    //     cout << "No subarray found with sum " << S << endl;
    // }
    
    
    
 
    return 0;
}
