#include <iostream>
using namespace std;

// Function to calculate the sum of natural numbers up to 'n'
int sum_of_natural_numbers(int n) {
    // Base case: if n is 0, the sum is 0
    if (n == 0) {
        return 0;
    }
    
    // Recursive case: return n plus the sum of natural numbers up to n-1
    return n + sum_of_natural_numbers(n-1);
}

// Main function where the program execution starts
int main() {
    int n; 
    // Prompt the user to enter a number
    cout << "Enter a positive integer: ";
    // Read the input number from the user
    cin >> n;
    
    // Call the function to calculate the sum of natural numbers up to 'n' and print the result
    cout << "Sum of natural numbers up to " << n << " is: " << sum_of_natural_numbers(n) << endl;

    return 0; // Indicate successful program termination
}
