#include <iostream> // Include for input/output operations
#include <string> // Include for string class
#include <algorithm>

using namespace std;

int main() { 

    // Concatenating strings using the append() method
    string s1 = "fam"; // Initial string s1
    string s2 = "ily"; // Initial string s2

    s1.append(s2); // Appends s2 to s1, making s1 "family"
    cout << s1 << endl; // Outputs: family

    // Alternative method for concatenating strings using the + operator
    // cout << s1 + s2 << endl; // Would also output: family if used instead of append()

    // Accessing characters in a string using the index
    cout << s1[1] << endl; // Outputs the character at index 1 of s1, which is 'a'

    // Clearing a string's content
    string abc = "fdffdfdsfsdfsdfsdfsd dfdfdf fdfgdg"; // Initial string abc
    abc.clear(); // Clears the content of abc
    cout << abc << endl; // Outputs an empty string

    // Compares strings s3 and s5 for equality
    string s3 = "abc"; // Declares and initializes string s3
    string s4 = "xyz"; // Declares and initializes string s4
    string s5 = "abc"; // Declares and initializes string s5, identical to s3

    // Checks if s3 and s5 are equal and prints a message if they are
    if (!s3.compare(s5)) {
        cout << "s3 and s5 are equal strings" << endl; // Prints this message since s3 and s5 are indeed equal
    }
    
    // Compares s4 with s3 and prints the result of the comparison
    cout << s4.compare(s3) << endl; // Prints the result of comparing s4 with s3. Since they are different, it returns a non-zero value indicating which string is lexicographically greater.

    string s6 = "abc";
    cout<<s6<<endl;

    //clear function
    s6.clear();

    if (s6.empty()) //empty function
    {
        cout<<"string s6 is empty"<<endl;
    }

    string s7;
    s7 = "Hello";

    if (!s7.empty())
    {
        cout<<"S7 is not an empty string"<<endl;
    }
    
    string s8 = "Nincompoop";

    s8.erase(3,3); //erase function

    cout<<"s8 "<<s8<<endl;

    string s9 = "Nincompoop";
    cout<<s9.find("com")<<endl; //find function

    s9.insert(2, "lol");
    cout<<s9<<endl;

    cout<<s9.size()<<endl;
    cout<<s9.length()<<endl;


    for (int i = 0; i < s9.length(); i++)
    {
        cout<<s9[i]<<endl;
    }
    

    string s10 = "nincompoop";

    string s = s1.substr(6, 4);

    cout<<"s: "<<s<<endl;


    string s11 = "786";

    int x = stoi(s11);
    cout << x+2<<endl;

    int y = 589;

    cout << to_string(y) + "2"<<endl;


    string s12 = "sdafsdgsffdfdsfsd";

    sort(s12.begin(), s12.end());

    cout<<"sorted s12: "<<s12<<endl;




    


    return 0;
}
