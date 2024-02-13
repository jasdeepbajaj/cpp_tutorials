#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {10, 20, 30, 40}; // Initialize an array of integers
    
    cout << arr << endl; // Outputs the memory address of the first element in the array
    cout << *arr << endl; // Dereferencing the array name gives the first element of the array (10)

    int *ptr = arr; // Creates a pointer that points to the first element of the array

    // Loop through the first three elements of the array
    //using pointers to print all the elements in an array
    // for (int i = 0; i < 3; i++)
    // {
    //     cout<<ptr<<endl; //outputs the memory location to the currenty elemnet pointed to by pointer
    //     cout << *ptr << endl; // Outputs the current element pointed to by ptr
    //     ptr++; // Increments the pointer to point to the next element in the array
    // }

    for (int i = 0; i < 3; i++)
    {
        cout<< *(arr + i)<<endl;
    }
    


    return 0;
}
