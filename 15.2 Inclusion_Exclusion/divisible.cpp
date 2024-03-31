#include <iostream> 
using namespace std; 

// Function to calculate the number of integers up to n that are divisible by a or b or both
int divisible(int n, int a, int b){
    int c1 = n/a; // Count of numbers up to n divisible by a
    int c2 = n/b; // Count of numbers up to n divisible by b

    int c3 = n/(a*b); // Count of numbers up to n divisible by both a and b (to avoid double counting)

    return c1+c2-c3; // Return the total count, adjusting for the inclusion-exclusion principle
}

int main(){

    int n, a, b;

    cin>>n>>a>>b; // Input values for n, a, and b from the user

    cout<<divisible(n, a, b)<<endl; // Output the total count of divisible numbers and a newline

    return 0; // Indicate that the program ended successfully
}
