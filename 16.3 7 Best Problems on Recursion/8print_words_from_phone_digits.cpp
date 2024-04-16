#include <iostream>
#include <string>

using namespace std;

// Array to map each digit to its corresponding characters on a phone keypad
string keypadArray[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

// Function to print all possible words that can be formed from the given numeric string 's'
void print_words(string s, string ans){

    // Base case: If the input string is empty, print the constructed word 'ans'
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    
    char ch = s[0]; // Extract the first digit of the input string
    string code = keypadArray[ch - '0']; // Get the characters corresponding to the digit
    string restofString = s.substr(1); // Extract the rest of the string (excluding the first digit)

    // Iterate through each character corresponding to the current digit
    for (int i = 0; i < code.length(); i++)
    {
        // Recursive call: Append the current character to the constructed word and process the rest of the string
        print_words(restofString, ans + code[i]);
    }
}

int main(){
    string s;
    // Input the numeric string
    cin >> s;

    // Call the function to print all possible words
    print_words(s, "");

    return 0;
}
