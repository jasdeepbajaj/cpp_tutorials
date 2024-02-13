#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); // Redirects input to read from "input.txt"
        freopen("output.txt", "w", stdout); // Redirects output to write to "output.txt"
    #endif

    // Input matrix dimensions
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    // Declaration of matrices
    int m1[n1][n2];
    int m2[n2][n3];

    // Input values for the first matrix, m1
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
            cin >> m1[i][j];
    }  

    // Input values for the second matrix, m2
    for (int i = 0; i < n2; i++) // Fix: Change loop condition to n1
    {
        for (int j = 0; j < n3; j++)
            cin >> m2[i][j];
        
    }

    // Initialize the result matrix, ans, with zeros
    int ans[n1][n3];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
            ans[i][j] = 0;
    }

    // Matrix multiplication
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
                ans[i][j] += m1[i][k] * m2[k][j]; 
        }
    }

    // Output the result matrix
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }

    return 0;
}
