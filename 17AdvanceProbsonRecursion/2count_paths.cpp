#include <iostream>
#include <string>

using namespace std;

// Function to count the number of paths from 'start' to 'end' using a six-sided dice
int count_paths(int start, int end){

    // If 'start' and 'end' are the same, there is only one path (no movement needed)
    if (start == end)
    {
        return 1;
    }

    // If 'start' exceeds 'end', no valid path exists
    if (start > end)
    {
        return 0;
    }
    
    int count = 0;

    // Roll the dice from 1 to 6, and recursively count the paths for each possible outcome
    for (int i = 1; i <= 6; i++)
    {
        // Increment the count by the number of paths starting from 'start + i' and ending at 'end'
        count += count_paths(start + i, end);
    }

    return count;
}

int main(){

    int s, e;
    // Input the starting and ending points
    cin >> s >> e;
    // Output the count of paths from 's' to 'e'
    cout << count_paths(s, e);

    return 0;
}
