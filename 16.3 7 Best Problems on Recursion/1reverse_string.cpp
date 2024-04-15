#include <iostream>
#include <string>
using namespace std;

// Function to reverse a string recursively
void reverse_string(string word) {
    // Base case: if the length of the word is 0, return
    if (word.length() == 0) {
        return;
    }

    // Get the substring excluding the first character
    string rest_of_string = word.substr(1);
    // Recursively call reverse_string with the rest of the string
    reverse_string(rest_of_string);
    // Output the first character of the current word
    cout << word[0];
}

int main() {
    // Declare and initialize a string
    string s;
    getline(cin, s);
    // Call the reverse_string function with the string
    reverse_string(s);
    
    return 0;
}
