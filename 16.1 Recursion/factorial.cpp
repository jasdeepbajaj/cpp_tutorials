#include <iostream>
using namespace std;

// Function to calculate the factorial of 'n'
int factorial(int n) {
    // Base case: if 'n' is 0, the factorial is 1
    if (n == 0) {
        return 1;
    }
    
    // Recursive case: return 'n' multiplied by the factorial of 'n-1'
    return n * factorial(n-1);
}

// Main function where the program execution starts
int main() {
    int n;
    // Prompt the user to enter a number
    cout << "Enter a non-negative integer: ";
    // Read the input number from the user
    cin >> n;
    
    // Call the function to calculate the factorial of 'n' and print the result
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;

    return 0; // Indicate successful program termination
}
