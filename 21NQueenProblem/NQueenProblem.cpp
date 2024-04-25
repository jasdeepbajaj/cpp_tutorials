#include <iostream>
#include <vector>
using namespace std;

// Function to check if placing a queen on board at position (x, y) is safe.
bool isSafe(vector<vector<int>> &arr, int x, int y, int n){
    // Check column for another queen
    for (int row = 0; row < x; row++) {
        if (arr[row][y] == 1) {
            return false; // Another queen is in the same column
        }
    }

    // Check upper left diagonal for another queen
    int row = x;
    int col = y;
    while (row >= 0 && col >= 0) {
        if (arr[row][col] == 1) {
            return false; // Another queen is on this diagonal
        }
        row--;
        col--;
    }

    // Check upper right diagonal for another queen
    row = x;
    col = y;
    while (row >= 0 && col < n) {
        if (arr[row][col] == 1) {
            return false; // Another queen is on this diagonal
        }
        row--;
        col++;
    }

    return true; // No conflicts, it's safe to place the queen here
}

// Recursive function to solve N-Queen problem
bool nQueen(vector<vector<int>> &arr, int x, int n){
    if (x >= n) {
        return true; // All queens are placed successfully
    }

    // Try placing a queen in each column of row 'x'
    for (int col = 0; col < n; col++) {
        if (isSafe(arr, x, col, n)) {
            arr[x][col] = 1; // Place a queen here

            // Recurse to place the rest of the queens
            if (nQueen(arr, x + 1, n)) {
                return true; // Found a valid arrangement
            }
            arr[x][col] = 0; // Backtrack: Remove the queen and try the next column
        }
    }
    return false; // If no column worked, return false
}

int main(){
    int n;
    cout << "Enter the size of the board: ";
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n, 0));

    int row = 0;
    // Attempt to solve the N-Queen problem
    if (nQueen(arr, row, n)) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << " "; // Print the solution matrix
            }
            cout << endl;
        }
    } else {
        cout << "No solution exists for the given board size." << endl;
    }

    return 0;
}
