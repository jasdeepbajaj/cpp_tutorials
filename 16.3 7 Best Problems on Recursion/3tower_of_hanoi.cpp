#include <iostream>
using namespace std;

// Function to solve the Tower of Hanoi problem recursively
// n: number of discs to move
// src: source rod
// dest: destination rod
// help: auxiliary rod
void towerofHanoi(int n, char src, char dest, char help) {
    // Base case: if there are no discs to move, return
    if (n > 0) {
        // Move (n-1) discs from source to help using destination as auxiliary
        towerofHanoi(n - 1, src, help, dest);
        // Move the nth disc from source to destination
        cout << "Move a disc from " << src << " to " << dest << endl;
        // Move (n-1) discs from help to destination using source as auxiliary
        towerofHanoi(n - 1, help, src, dest);
    }
}

int main() {
    int n;
    // Input the number of discs
    cin >> n;
    // Call the towerofHanoi function with the given parameters
    towerofHanoi(n, 'A', 'C', 'B');

    return 0;
}
