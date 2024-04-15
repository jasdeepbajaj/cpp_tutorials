#include <iostream>
#include <string>

using namespace std;

// Function to move all occurrences of 'x' to the end of the string recursively
string move_x(string word){

    // Base case: if the string is empty, return an empty string
    if (word.length() == 0)
    {
        return "";
    }

    // Extract the first character of the string
    char first = word[0];

    // Recursively call the function with the substring starting from the second character
    string ans = move_x(word.substr(1));

    // If the first character is 'x', append 'x' to the end of the string obtained from the recursive call
    if (first == 'x')
    {
        return ans + first;
    }
    // If the first character is not 'x', prepend it to the string obtained from the recursive call
    else
    {
        return first + ans;
    }
}

int main () {   

    string s;

    // Input the string from the user
    cin >>s;

    // Call the function to move 'x' characters to the end
    cout<<move_x(s)<<endl;

    return 0;
}
