#include <iostream>
#include <string>

using namespace std;

// Function to generate all possible substrings of a given string
// word: the input string
// out: the current substring being formed
void generate_substring(string word, string out){

    // If the input string is empty, print the current substring
    if (word.length() == 0){
        cout << out << endl;
        return;
    }

    // Recursive call excluding the first character of the word
    generate_substring(word.substr(1), out);
    
    // Recursive call including the first character of the word in the substring
    generate_substring(word.substr(1), out + word[0]);

}

int main(){

    // Input the string
    string s;
    cin >> s;

    // Call the function to generate substrings starting from an empty string
    generate_substring(s, "");

    return 0;
}
