#include<iostream>
using namespace std;

int main() {
    // Redirect input and output to files if not running on an online judge
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin); // Redirects input to read from "input.txt"
    //     freopen("output.txt", "w", stdout); // Redirects output to write to "output.txt"
    // #endif

    // Input matrix dimensions
    int m, n;

    cin >> m >> n;

    // Declaration of matrix
    int mat[n][m];

    // Input values for the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];
    }  

    // Input target value
    int target;
    cin >> target;

    // Initialize pointers for matrix traversal. Choosing top right or bottom left as initial point for traversal
    int r = 0, c = n-1;

    // Flag to indicate if the target value is found
    bool found = false;

    // Loop to search for the target value in the matrix
    while (r < m && c >= 0) {
        if (mat[r][c] == target) {
            found = true;  // Set found flag to true if target is found
            break; //get out of the while loop once the element has been found
        }
        else if (mat[r][c] > target) {
            c--;  // Move left in the current row if the current element is greater than the target
        }
        else {
            r++;  // Move down to the next row if the current element is less than the target
        }
    }

    // Check if the target value was found and display the result
    if (found) {
        cout << "Target value has been found" << endl;
    }
    else {
        cout << "Target value was not found in the matrix" << endl;
    }
    
    return 0;
}
