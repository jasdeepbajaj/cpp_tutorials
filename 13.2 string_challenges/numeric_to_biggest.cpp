#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string str = "52134";
    // method1 
    // sort(str.begin(), str.end(), greater<int>());


    //method2
    sort(str.begin(), str.end());

    cout<<str<<endl;

    string s1;
    for (int i = str.length() - 1; i >= 0 ; i--)
    {
        s1 += str[i];
    }
    cout<<s1<<endl;

    int ans = stoi(s1);
    cout<<ans<<endl;
    
    



    return 0;
}