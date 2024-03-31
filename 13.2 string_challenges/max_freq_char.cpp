#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string s = "sddwffdsggfgfdghgbfdg";

    int frequency[26];

    for (int i = 0; i < 26; i++)
    {
        frequency[i] = 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        frequency[s[i] - 'a']++;
    }
    
    char ans = 'a';
    int maxF = 0;
    for (int i = 0; i < 26; i++)
    {
        if (frequency[i] > maxF)
        {
            maxF = frequency[i];
            ans = i + 'a';
        }
        
    }
    cout <<"max frequency: "  <<maxF<<endl;
    cout<< "max occuring char: "<<ans<<endl;



    return 0;
}