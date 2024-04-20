#include <iostream>

using namespace std;

// Function to calculate the number of ways to tile a floor of size n
// Parameter: n - size of the floor to be tiled
// Returns: the number of ways to tile the floor
int tiling_ways(int n){

    // Base case: If the floor size is 0, there is only one way (no tile)
    if (n == 0){
        return 0;
    }
    // Base case: If the floor size is 1, there is only one way (one tile)
    if (n == 1){
        return 1;
    }

    // Recursive case: Number of ways to tile the floor of size n is the sum of
    // the number of ways to tile the floor of size n-1 and n-2
    return tiling_ways(n - 1) + tiling_ways(n - 2);
}

int main (){

    int n;

    // Prompting the user to enter the size of the floor
    cout << "Enter the size of the floor: ";
    cin >> n;

    // Calling the tiling_ways function and outputting the result
    cout << "Number of ways to tile the floor: " << tiling_ways(n) << endl;

    return 0;
}
