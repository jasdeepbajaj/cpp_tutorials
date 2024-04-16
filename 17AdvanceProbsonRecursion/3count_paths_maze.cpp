#include <iostream>

using namespace std;

// Function to count the number of paths in a maze of size n x n
int count_paths_maze(int n, int i, int j){

    // Base case: if we reach the bottom-right corner, return 1 (we found a path)
    if (i == n - 1 && j == n - 1)
    {
        return 1;
    }

    // If either i or j exceeds the maze boundaries, return 0 (no valid path)
    if (i >= n || j >= n)
    {
        return 0;
    }
    
    // Recursively count paths by moving right or down in the maze
    return count_paths_maze(n, i + 1, j) + count_paths_maze(n, i, j + 1);
}

int main(){

    int n, i, j;
    // Input the size of the maze and starting position
    cin >> n >> i >> j;
    // Output the count of paths from starting position to bottom-right corner
    cout << count_paths_maze(n, i, j);

    return 0;
}
