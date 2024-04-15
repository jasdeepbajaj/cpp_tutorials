#include <iostream>
using namespace std;

// Function to calculate the power of 'n' raised to 'p'
int power(int n, int p) {
    // Base case: if 'p' is 0, the result is 1
    if (p == 0) {
        return 1;
    }
    
    // Recursive case: return 'n' multiplied by the result of 'n' raised to 'p-1'
    return n * power(n, p-1);
}

// Main function where the program execution starts
int main() {
    int n, p;
    // Prompt the user to enter values for 'n' and 'p'
    cout << "Enter the base 'n' followed by the exponent 'p': ";
    // Read the input values for 'n' and 'p' from the user
    cin >> n >> p;
    
    // Call the function to calculate 'n' raised to the power 'p' and print the result
    cout << n << " raised to the power " << p << " is: " << power(n, p) << endl;

    return 0; // Indicate successful program termination
}
