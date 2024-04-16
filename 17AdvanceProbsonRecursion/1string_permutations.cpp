#include <iostream>
#include <string>

using namespace std;


void string_permutations(string s, string out){

    if (s.length() == 0)
    {
        cout<<out<<endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string restofString = s.substr(0,i) + s.substr(i+1);

        string_permutations(restofString, out + ch);
    }
    
    
    
}

int main(){
    string s;
    // Input the string
    cin>>s;

    string_permutations(s, "");

    return 0;
}
