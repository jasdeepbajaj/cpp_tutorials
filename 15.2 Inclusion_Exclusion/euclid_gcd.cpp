#include <iostream> 
using namespace std; 

// Function to compute the greatest common divisor (GCD) of two integers using the Euclidean algorithm.
int euclid_gcd(int a, int b){
    int rem; // Variable to store the remainder in each step of the algorithm.
    
    // Loop until the second number becomes 0.
    while (b != 0)
    {
        rem = a % b; // Calculate the remainder of a divided by b.
        a = b; // Set a to be b for the next iteration.
        b = rem; // Set b to be the remainder for the next iteration.
    }
    
    return a; // Return the GCD, which is stored in a at this point.    
}

int main(){
    int a, b;
    cin >> a >> b; // Read two integers from the user.

    cout << euclid_gcd(a, b) << endl; // Output the GCD of the two integers followed by a newline.

    return 0; // Indicate that the program ended successfully.
}
