#include<iostream>
using namespace std;

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin); // Redirects input to read from "input.txt"
    //     freopen("output.txt", "w", stdout); // Redirects output to write to "output.txt"
    // #endif
    int n;    
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n-1-i])
        {
            check = false;
        }
        
    }

    if (check)
    {
        cout<<"word is a palindrome"<<endl;
    }
    else
    {
        cout<<"word is not a palindrome"<<endl;
    }
    
    
    

    return 0;
}
