#include <iostream> // Include for input/output operations
#include <string> // Include for string class

using namespace std;

int main() { 
    
    //Method1
    // Initialize an empty string
    string str;
    // Read a string from standard input (stops at first whitespace)
    cin >> str;
    // Output the string with a prefix
    cout << "str: " << str << endl;

    
    //Method2
    // Create a string of 5 'n' characters
    string str1(5, 'n');
    // Output the string with a prefix
    cout << "str1: " << str1 << endl;

    
    //Method3
    // Initialize a string with a constant character array
    string str2 = "ApniKaksha";
    // Output the string with a prefix
    cout << "str2: " << str2 << endl;

    
    //Method4
    // Initialize another empty string for getline example
    string str3;
    // Read a line from standard input into str3 (includes spaces)
    getline(cin, str3);
    // Output the string with a prefix
    cout << "str3: " << str3 << endl;
}

