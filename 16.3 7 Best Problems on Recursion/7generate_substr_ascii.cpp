#include <iostream>
#include <string>

using namespace std;

// Function to generate all possible substrings of a string 's'
// with ASCII characters and their corresponding integer codes
void generate_substr_ascii(string s, string out){

    // Base case: if the input string is empty, print the generated substring 'out'
    if (s.length()==0)
    {
        cout<<out<<endl;
        return;
    }

    // Extract the first character of the string
    char ch = s[0];
    // Get the ASCII code of the character
    int code = ch;
    // Extract the rest of the string (excluding the first character)
    string restofString = s.substr(1);

    // Recursive calls:
    // 1. Generate substrings without adding the current character
    generate_substr_ascii(restofString, out);
    // 2. Generate substrings by adding the current character
    generate_substr_ascii(restofString, out + ch);
    // 3. Generate substrings by adding the ASCII code of the current character
    generate_substr_ascii(restofString, out + to_string(code));
}

int main(){
    string s;
    // Input the string
    cin>>s;

    // Call the function to generate substrings with ASCII characters
    generate_substr_ascii(s, "");

    return 0;
}
