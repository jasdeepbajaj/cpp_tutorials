#include <iostream>
using namespace std;

// Function to calculate the nth Fibonacci number
int nth_fibonacci(int n) {
    // Base case: if 'n' is 0, return 0
    if (n == 0) {
        return 0;
    }
    // Base case: if 'n' is 1, return 1
    else if (n == 1) {
        return 1;
    }
    
    // Recursive case: return the sum of the (n-1)th and (n-2)th Fibonacci numbers
    return nth_fibonacci(n-1) + nth_fibonacci(n-2);
}

// Main function where the program execution starts
int main() {
    int n;
    // Prompt the user to enter a number
    cout << "Enter a non-negative integer: ";
    // Read the input number from the user
    cin >> n;
    
    // Call the function to calculate the nth Fibonacci number and print the result
    cout << "The " << n << "th Fibonacci number is: " << nth_fibonacci(n) << endl;

    return 0; // Indicate successful program termination
}
