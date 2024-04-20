#include <iostream>
using namespace std;

// Function to check if the current position (x, y) is safe to move to
bool isSafe(int** arr, int x, int y, int n) {
    // Check if (x, y) is within bounds and the cell is not blocked (i.e., it's a 1)
    if (x < n && y < n && arr[x][y] == 1) {
        return true;
    }
    return false;
}

// Recursive function to solve the rat in a maze problem
bool ratinMaze(int** arr, int x, int y, int n, int** solArr) {
    // If (x, y) is the bottom-right corner, mark it as part of the solution and return true
    if (x == n - 1 && y == n - 1) {
        solArr[x][y] = 1;
        return true;
    }

    // Check if the current position is safe
    if (isSafe(arr, x, y, n)) {
        // Mark this cell as part of the solution path
        solArr[x][y] = 1;
        // Recursively attempt to move right in the maze
        if (ratinMaze(arr, x + 1, y, n, solArr)) {
            return true;
        }
        // If moving right didn't give a solution, recursively attempt to move down
        if (ratinMaze(arr, x, y + 1, n, solArr)) {
            return true;
        }
        // If neither moving right nor down works, unmark this cell as part of the solution (backtracking)
        solArr[x][y] = 0;
        return false;
    }
    // Return false if the position is not safe
    return false;
}

int main() {
    int n;
    cout << "Enter the size of the maze: ";
    cin >> n;

    // Allocate memory for the maze
    int** arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }

    // Read the maze input from the user
    cout << "Enter the maze row by row (0s and 1s only, where 1 is passable and 0 is blocked): \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Initialize the solution array with zeros
    int** solArr = new int*[n];
    for (int i = 0; i < n; i++) {
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++) {
            solArr[i][j] = 0;
        }
    }

    // Try to solve the maze starting from (0, 0)
    if (ratinMaze(arr, 1, 1, n, solArr)) {
        cout << "\nSolution path (marked as '1's): \n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << solArr[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No solution exists for the maze.\n";
    }

    return 0;
}


// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1

