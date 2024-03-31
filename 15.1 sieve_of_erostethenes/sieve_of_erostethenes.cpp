#include <iostream>
using namespace std;

// Define a function primeSieve that takes an integer n as input
// and prints all prime numbers up to n using the Sieve of Eratosthenes algorithm.
void primeSieve(int n){

    // Initialize an array 'prime' of size 100 with all elements set to 0.
    // In this context, 0 will signify that a number is prime.
    int prime[100] = {0};

    // Loop through all numbers from 2 to n.
    for (int i = 2; i <= n ; i++)
    {
        // If the current number i is marked as 0 (prime), proceed to mark its multiples as non-prime.
        if (prime[i] == 0)
        {
            // Start from i*i (all smaller multiples of i would have been marked by smaller primes)
            // and mark all multiples of i as non-prime (1) up to n.
            for (int j = i*i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }

    // After marking, iterate through the array from 2 to n.
    for (int i = 2; i <= n; i++)
    {
        // If an index is marked as 0 (prime), print its value.
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){
    int n;
    // Read the value of n from user input.
    cin >> n;

    // Call the primeSieve function to print all prime numbers up to n.
    primeSieve(n);

    return 0;
}
