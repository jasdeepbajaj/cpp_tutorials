#include <iostream>  
#include <climits>

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

    int array[7] = {1, -5, 20, 40, 10, 80, 14};  
    int n = sizeof(array)/sizeof(array[0]);

    printArray(array, n);  // Call function to print the initial array

    int x;
    cout<<"input the index before which you want the index: ";
    cin>>x;

    int a = INT_MIN;
    for (int i = 0; i <= x; i++)
    {
        if (array[i]>a)
        {
            a = array[i];
        }
        
    }

    cout<<"The maximum value upto index "<<x<<" in the given array is: "<<a<<endl;
    
    
}
