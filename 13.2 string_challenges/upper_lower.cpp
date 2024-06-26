#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string str = "sdsdfdsfsdsdsad";

    //convert uppercase

    for ( int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        
    }
    
    cout<<str<<endl;

    //convert lowercase

    for ( int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        
    }

    cout<<str<<endl;


    //convert uppercase using transform function
    string s = "sfdsfsdgfgfdgfd";

    transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout<<s<<endl;

    //convert lowercase using transform function

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout<<s<<endl;



    return 0;
}