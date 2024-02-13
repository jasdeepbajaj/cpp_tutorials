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

    int array[3] = {1, 2, 2};  
    int n = sizeof(array)/sizeof(array[0]);

    printArray(array, n);  // Call function to print the initial array

    int sum = 0;
    int total_sum = 0;
    
    cout<<n<<endl;

    for (int i = 0; i < n; i++)
    {   
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + array[j];
            // cout<<sum<<endl;
            total_sum += sum;
        }
        
    }
    
    
    
    // for (int i = 0; i < n; i++)
    // {   
    //     for (int j = i; i < n; j++)
    //     {
    //         sum+=array[j];
    //         cout<<sum;
    //     }
        
    // }
    

    

    cout<<"The sum of all subarrays of the given array is: "<<total_sum<<endl;
    
    
}
