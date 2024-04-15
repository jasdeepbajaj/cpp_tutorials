#include <iostream>
#include <string>

using namespace std;

// Function to recursively replace occurrences of "pi" with "3.14" in a string
void replace_pi(string s) {
    // Base case: if the string is empty, return
    if (s.length() == 0) {
        return ;
    }

    // If the current characters are 'p' and 'i', replace them with "3.14"
    if (s[0] == 'p' && s[1] == 'i') {
        cout << "3.14";
        // Get the substring excluding the replaced "pi"
        string rest_of_string = s.substr(2);
        // Recursively call replace_pi with the rest of the string
        replace_pi(rest_of_string);
    } else {
        // If the current characters are not 'p' and 'i', output the current character
        cout << s[0];
        // Get the substring excluding the current character
        string rest_of_string = s.substr(1);
        // Recursively call replace_pi with the rest of the string
        replace_pi(rest_of_string);
    }
}

int main() {
    string s;
    // Read a string input from the user
    cin >> s;
    // Call the replace_pi function with the input string
    replace_pi(s);

    return 0;
}
