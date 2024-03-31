#include <iostream>
using namespace std;

// Function to find and print the prime factors of a given number n
void primeFactor(int n){

    // Initialize the smallest prime factor (spf) array with 0s.
    int spf[100] = {0};
    
    // Setting the smallest prime factor for every number to itself
    for (int i = 2; i <= n; i++)
    {
        spf[i] = i;
    }
    
    // Sieve of Eratosthenes algorithm to fill spf
    for (int i = 2; i <= n; i++)
    {
        // If i is prime (spf[i] is unchanged), then mark it as smallest prime factor for itself and multiples of i
        if (spf[i] == i)
        {
            // Start from i*i, because smaller multiples of i would have already been processed
            for (int j = i*i; j <= n; j+=i)
            {
                // Update spf[j] if it is still set to j (meaning j is not yet processed or found a smaller prime factor)
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }

    // Printing all prime factors by dividing n by its smallest prime factor until n becomes 1
    while (n!=1)
    {
        cout<<spf[n]<<" ";
        n = n / spf[n];
    }
}

int main(){

    int n;
    // Reading input number
    cin>>n;

    // Finding and printing prime factors of n
    primeFactor(n);

    return 0;
}
