#include <iostream>
#include <string>

using namespace std;

// Function to remove consecutive duplicates from a string recursively
void remove_duplicates(string word){

    // Base case: if the string is empty, return
    if (word.length() == 0)
    {
        return;
    }

    // Extract the first character of the string
    char first = word[0];

    // Extract the rest of the string after the first character
    string restofString = word.substr(1);

    // Get the first character from the rest of the string
    char first_from_restofString = restofString[0];

    // If the first character and the next character are the same,
    // call the function recursively with the rest of the string
    if (first == first_from_restofString)
    {
        remove_duplicates(restofString);
    }
    // If the first character and the next character are different,
    // print the first character and call the function recursively with the rest of the string
    else
    {
        cout<<first;
        remove_duplicates(restofString);
    }
}

int main () {   

    string s;
    // Input the string from the user
    cin >>s;

    // Call the function to remove consecutive duplicates
    remove_duplicates(s);

    return 0;
}
